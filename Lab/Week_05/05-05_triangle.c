#include <stdio.h>
#include <stdlib.h>

int main() {    

    char buffer[100];
    int n, i, j;

    printf("Enter n: ");
    n = atoi( fgets(buffer, sizeof(buffer), stdin) );

    for(i = 0; i < n ; i++) {

        for(j = 0; j < i; j++) {
            printf("-");
        }

        printf("\n");
    }
    for(i = n; i > 0; i--) {
        for(j = 0; j < i; j++) {
            printf("-");
        }
        printf("\n");
    }

    printf("%d", n);

    return 0;
}
