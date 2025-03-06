#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int amount, x, y;
    char c_piece[20];
    int board[BOARD_SIZE][BOARD_SIZE] = {{0}};
    
    scanf("%d", &amount);
    getchar();
    
    for (int i = 0; i < amount; i++) {
        char piece;
        int j = 0;
        
        fgets(c_piece, 20, stdin);

        sscanf(c_piece, "%c(%d, %d)", &piece, &x, &y);
        setPieceOnTable(board, piece, x, y);
    }
    
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c|", board[i][j] ? board[i][j] : ' ');
        }
        printf("\n");
    }
    
    return 0;
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ) {
    board[yPos][xPos] = piece;
}
