#include <stdio.h>

int main() {
    int d[] = {1, 2, 3, 4};
    int *p;
    for(p=d; *p != 6; p = d + (++p - d) % 4) {
        *p = *p * 2;
    }
    printf("%d %d %d %d", d[0], d[1], d[2], d[3]);
    return 0;
}