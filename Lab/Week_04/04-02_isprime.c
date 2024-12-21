#include <stdio.h>
#include <stdlib.h>

int is_prime(int x) {
    return ;
}

int main() {
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 1; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}

// 10
// 2 is a prime number.
// 3 is a prime number.
// 5 is a prime number.
// 7 is a prime number.