#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display_dash(int i) {

    for (int j = 0; j < i; j++) { // Hyphen Left
        printf("--");
    }
}

void display_char(int n, int i) {

    for (int j = 1; j <= n - i; j++) { // Alp Left
        printf("%c", 'a' + n - j);
        if (j != n - i) {
            printf("-");
        }
    }
    for (int j = n - i - 1; j > 0; j--) { // Alp Right
        printf("-%c", 'a' + n - j);
    }
}

void pattern(int n) {

    if(n <= 0 || n > 26) {
        printf("-");
        return;
    }

    for(int i = n - 1; i >= -n + 1; i--) {
        
        int abs_i = i > 0 ? i : -i; // Absolute I for other side

        display_dash(abs_i); // Hyphen Left
        display_char(n, abs_i); // Char
        display_dash(abs_i); // Hyphen Right

        printf("\n");
    }

}

int main() {

    char n_in[100];
    int n = atoi( fgets(n_in, 100, stdin) );
    
    pattern(n);
    return 0;
}