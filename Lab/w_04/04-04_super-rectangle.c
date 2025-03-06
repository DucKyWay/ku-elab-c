#include <stdio.h>
#include <stdlib.h>

int main() {

    char x_in[100], y_in[100];
    int i, j, k;

    int x = atoi( fgets( x_in, 100, stdin) );
    int y = atoi( fgets( y_in, 100, stdin) );

    for(j = 0; j < y; j++) {
        if(j == 0) {
            for(i = 0; i < x; i++) {
                printf("*");
            }
        } else if(j == y - 1) {
            for(k = j; k > 0; k--) printf(" ");
            for(i = 0; i < x; i++) {
                printf("*");
        }
        } else {
            for(k = j; k > 0; k--) printf(" ");
            for(i = 0; i < x; i++) {
                printf("%s", (i == 0 || i == x - 1) ? "*" : " ");
            } 
        }   
        printf("\n");
    }

    return 0;
}