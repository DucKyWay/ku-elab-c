#include <stdio.h>

int main() {
    int a, b, c, d;
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    for (a = 1; a <= 100; a++)
        if (A % a == 0) {
            c = A / a;
            for (b = -100; b <= 100; b++)
                if (b != 0 && C % b == 0) {
                    d = C / b;
                    if (a * d + b * c == B) {
                        printf("%d %d %d %d\n", a, b, c, d);
                        return 0;
                    }
                }
        }
    printf("No Solution\n");
    return 0;
}