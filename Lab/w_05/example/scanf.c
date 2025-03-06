#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y;
    scanf("%d %d", &x, &y);
    printf("x: %d (%p), y = %d (%p)", x, &x, y, &y);
    return 0;
}