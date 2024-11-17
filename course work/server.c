#include "common.h"
#include <stdint.h>
#include <time.h>

PlayerStats* load_stats(const char* filename) {
    int fd = open(filename, O_RDWR | O_CREAT, 0644);
    if (fd == -1) error("Ошибка открытия файла статистики");
    ftruncate(fd, sizeof(PlayerStats) * MAX_PLAYERS);

    PlayerStats* stats = mmap(NULL, sizeof(PlayerStats) * MAX_PLAYERS, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (stats == MAP_FAILED) error("Ошибка memory mapping");
    close(fd);
    return stats;
}

void init_board(GameBoard* board) {
    memset(board->board, 0, sizeof(board->board));
    board->hits = 0;

    for (int i = 0; i < BOARD_SIZE; i++) {
        int x = rand() % BOARD_SIZE;
        int y = rand() % BOARD_SIZE;
        board->board[x][y] = 1;
    }
}

void handle_client(int client_socket, PlayerStats* stats) {
    GameBoard board;
    init_board(&board);
    char buffer[BUFFER_SIZE];
    while (1) {
        bzero(buffer, BUFFER_SIZE);
        read(client_socket, buffer, BUFFER_SIZE);

        Message* msg = (Message*)buffer;

        if (strcmp(msg->command, "move") == 0) {
            int x, y;
            sscanf(msg->data, "%d %d", &x, &y);

            if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE) {
                snprintf(msg->data, sizeof(msg->data), "Некорректный ход!");
            } else if (board.board[x][y] == 1) {
                board.board[x][y] = 0;
                board.hits++;
                snprintf(msg->data, sizeof(msg->data), "Попадание!");

                if (board.hits == BOARD_SIZE) {
                    snprintf(msg->data, sizeof(msg->data), "Вы победили!");
                    stats->wins++;
                }
            } else {
                snprintf(msg->data, sizeof(msg->data), "Мимо!");
            }
        } else if (strcmp(msg->command, "stats") == 0) {
            snprintf(msg->data, sizeof(msg->data), "Победы: %d, Поражения: %d", stats->wins, stats->losses);
        } else if (strcmp(msg->command, "quit") == 0) {
            close(client_socket);
            return;
        }

        write(client_socket, buffer, sizeof(Message));
    }
}

int main() {
    srand(time(NULL));

    PlayerStats* stats = load_stats("stats.dat");
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;

    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) error("Ошибка создания сокета");

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    if (bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0)
        error("Ошибка привязки");

    listen(server_socket, MAX_PLAYERS);
    printf("Сервер запущен. Ожидание подключения игроков...\n");

    socklen_t client_len = sizeof(client_addr);
    while ((client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &client_len)) > 0) {
        printf("Игрок подключился!\n");
        if (!fork()) {
            close(server_socket);
            handle_client(client_socket, stats);
            exit(0);
        }
        close(client_socket);
    }

    close(server_socket);
    munmap(stats, sizeof(PlayerStats) * MAX_PLAYERS);
    return 0;
}
