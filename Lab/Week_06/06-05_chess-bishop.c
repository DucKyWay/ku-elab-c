#include <stdio.h>
#define BOARD_SIZE 8

// void bishopMoves(char board[][BOARD_SIZE], int x_pos, int y_pos) {
//     int y = y_pos;
//     for(int x = x_pos - 1; x >= 0; x--) // Left-Upper
//         board[--y][x] = 'X';
//     y = y_pos;
//     for(int x = x_pos - 1; x >= 0; x--) // Left-Down
//         board[++y][x] = 'X';
//     y = y_pos;
//     for(int x = x_pos + 1; x < BOARD_SIZE; x++) //Right-Upper
//         board[--y][x] = 'X';
//     y = y_pos;
//     for(int x = x_pos + 1; x < BOARD_SIZE; x++) //Right-Upper
//         board[++y][x] = 'X';
// }

void bishopMoves(char board[][BOARD_SIZE], int x_pos, int y_pos) {
    // Re-Write
    int x, y;

    // Left-Upper
    x = x_pos - 1;
    y = y_pos - 1;
    while (x >= 0 && y >= 0) {
        board[y][x] = 'X';
        x--;    y--;
    }

    // Left-Down
    x = x_pos - 1;
    y = y_pos + 1;
    while (x >= 0 && y < BOARD_SIZE) {
        board[y][x] = 'X';
        x--;    y++;
    }

    // Right-Upper
    x = x_pos + 1;
    y = y_pos - 1;
    while (x < BOARD_SIZE && y >= 0) {
        board[y][x] = 'X';
        x++;    y--;
    }

    // Right-Down
    x = x_pos + 1;
    y = y_pos + 1;
    while (x < BOARD_SIZE && y < BOARD_SIZE) {
        board[y][x] = 'X';
        x++;    y++;
    }

    board[y_pos][x_pos] = 'B';
}


int main() {
    int x, y;
    char in_pos[10];
    char board[BOARD_SIZE][BOARD_SIZE];
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++)
            board[i][j] = ' ';
    }

    printf("Enter Bishop's X Y position: ");
        
    int i = 0;
    while(1) {
        char c = getchar();
        if(c == '\n' || c == -1) {
            in_pos[i] = '\0'; 
            break;
        }
        if(i == 0)
            x = c - '0';
        if(i == 2)
            y = c - '0';
        i++;
    }
    board[y][x] = 'B';

    bishopMoves(board, x, y);

    // Board
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for(int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c|", board[i][j]);
        }
        printf("\n");
        printf("------------------\n");
    }

    return 0;
}