#include <stdio.h>

int main() {

    int matrix[4][4];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int player, most = 0;
    for (int i = 0; i < 4; i++) {
        int temp = 0;
        for(int j = 0; j < 4; j++) {
            temp += matrix[i][j];
        }
        if(most <= temp) { 
            most = temp;
            player = i + 1;
        }
    }

    printf("%d %d", player, most);
    
    return 0;
}