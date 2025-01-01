#include <stdio.h>
#include <stdlib.h>

int main() {    

    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n ; i++) {
        for(j = 0; j < i; j++) {

            if(j % 2 == 0)
                printf("-");
            else
                printf("x");
        }
        printf("\n");
    }
    for(i = n - 1; i > 0; i--) {
        for(j = 0; j < i; j++) {

            if(j % 2 == 0)
                printf("-");
            else
                printf("x");
        }
        printf("\n");
    }
    return 0;
}
