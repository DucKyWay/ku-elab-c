#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main() {
    int r;
    double a1, a2;
    scanf("%d", &r);

    a1 = M_PI*r*r;
    a2 = 2*r*r;
    printf("%lf\n", a1);
    printf("%lf", a2);
    return 0;
}