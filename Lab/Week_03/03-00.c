#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

int main() {
    int n = 12;

    while(0 < n) {
        n--;
        printf("%d", n);
    }
    while(0) {
        printf("%d", n);
    }
    do {
        printf("%d", n);
    } while(n > 0);

    return 0;
}