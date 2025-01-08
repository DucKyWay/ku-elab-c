#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

int main() {
    int n;
    char n_in[100];
    
    n = atoi(fgets(n_in, 100, stdin));

    for(; n>= 0; n--) {
        printf("%d\n", n);
    }

    return 0;
}