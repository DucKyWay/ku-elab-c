#include <stdio.h>
#include <stdlib.h>

int main() {

    char n_in[100];
    int i, j, k;

    int n = atoi( fgets( n_in, 100, stdin) );

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i < n; i++) {
        for(j = i; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}