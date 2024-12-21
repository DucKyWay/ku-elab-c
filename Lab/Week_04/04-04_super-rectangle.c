#include <stdio.h>
#include <stdlib.h>

int main() {

    char x_in[100], y_in[100];
    int i, j;

    int x = atoi( fgets( x_in, 100, stdin) );
    int y = atoi( fgets( y_in, 100, stdin) );

    for(j = 0; j < y; j++) {
        for(i = 0; i < x; i++) {

            printf("*");    
        } 
        printf("\n");
    }

    return 0;
}