#ifndef COMMON_H
#define COMMON_H

#include <stdalign.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdbool.h>

#define PORT 5555
#define MAX_PLAYERS 2
#define BOARD_SIZE 5
#define BUFFER_SIZE (sizeof(Message))

typedef struct {
    char name[50];
    int wins;
    int losses;
} PlayerStats;

typedef struct {
    int board[BOARD_SIZE][BOARD_SIZE];
    int hits;
} GameBoard;

typedef struct {
    char command[50];
    char data[256];
} Message;

void error(const char* msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

size_t min(size_t a, size_t b){
    return a < b ? a : b;
}

bool starts_with(const char* alpha, const char* theta){
    for(int i=0; i < min(strlen(alpha), strlen(theta)); ++i){
        if(alpha[i] != theta[i]){
            return false;
        }
    }
    return true;
}

#endif
