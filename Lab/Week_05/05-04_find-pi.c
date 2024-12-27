#include <stdio.h>

int main() {

    int n;
    double result = 0;

    printf("Enter n: "); 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
            result += 4.0 / (2 * i + 1);
        else
            result -= 4.0 / (2 * i + 1);
    }

    printf("%.10f", result);
    return 0;
}