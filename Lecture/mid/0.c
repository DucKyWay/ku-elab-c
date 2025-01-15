#include <stdio.h>

int main() {
    int a = 13, b = 13;
    int m, n;
    int i;

    for(m = 0; m < a; m++) {
        for(n = 0; n < b; n++) {
            if((((m - 6)*(m - 6)) + (n - 6)*(n - 6) ) >= 24) {
                
                printf(".");
            }
            else if(((m >> 1) & 1) == ((n >> 1) & 1)) {
                printf("#");
            }   
            else {
                printf("O");
            } 
        }
        printf("\n");
    }
}