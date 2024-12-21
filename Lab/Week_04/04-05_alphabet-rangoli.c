#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pattern(int n) {

    if(n <= 0 || n > 26) {
        printf("-");
        return;
    }

    for(int i = n - 1; i >= -n + 1; i--) {
        
        int abs_i = i > 0 ? i : -i; // Absolute I for other side

        for (int j = 0; j < abs_i; j++) { // Hyphen Left
            printf("--");
        }

        for (int j = 1; j <= n - abs_i; j++) { // Alp Left
            printf("%c", 'a' + n - j);
            if (j != n - abs_i) {
                printf("-");
            }
        }

        for (int j = n - abs_i - 1; j > 0; j--) { // Alp Right
            printf("-%c", 'a' + n - j);
        }

        for (int j = 0; j < abs_i; j++) { // Hyphen Right
            printf("--");
        }

        printf("\n");
    }

}

int main() {

    char n_in[100];
    int n = atoi( fgets(n_in, 100, stdin) );
    
    pattern(n);

    return 0;
}