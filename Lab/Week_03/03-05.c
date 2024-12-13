#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    char c = 'a';
    char n_in[100];    

    n = atoi(fgets(n_in, 100, stdin));

    if(0 < n && n <= 26) {
        for(int i = n; i > 0; i--) {
            if(i == n) printf("%c", c + i - 1);
            else printf("-%c", c + i - 1);
        };
        for(int i = 0; i < n-1; i++) {
            if(i == n) printf("%c", c + i + 1);
            else printf("-%c", c + i + 1);
        };
    } else {
        puts("-");
    }

    return 0;
}