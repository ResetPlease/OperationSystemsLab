#include "common.h"

void play_game(int server_socket) {
    char buffer[256];
    Message msg;

    while (1) {
        printf("Введите команду (move X Y, stats, quit): ");
        fgets(buffer, 256, stdin);
        sscanf(buffer, "%s %[^\n]", msg.command, msg.data);

        write(server_socket, &msg, sizeof(Message));
        read(server_socket, &msg, sizeof(Message));

        printf("Ответ сервера: %s\n", msg.data);
        if (strcmp(msg.command, "quit") == 0) break;
    }
}

int main() {
    int client_socket;
    struct sockaddr_in server_addr;

    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) error("Ошибка создания сокета");

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0)
        error("Ошибка подключения");

    printf("Успешно подключено к серверу!\n");
    play_game(client_socket);
    close(client_socket);

    return 0;
}
