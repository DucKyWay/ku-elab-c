#include <stdio.h>
#include <stdlib.h>

int findLargestTripleSum(int n, int *a, int *b, int *c) {

    for (int i = 1; i <= n / 3; i++) { 
        for (int j = i + 1; j <= n / 2; j++) {
            
            int k = n - i - j;
            if (i * i + j * j == k * k) {
                *a = i;
                *b = j;
                *c = k;
            }
        }
    }
    return 1;
}

int main() {

    int n;
    int a = 0, b = 0, c = 0;

    scanf("%d", &n);

    findLargestTripleSum(n, &a, &b, &c);
    if(c != 0)
        printf("(%d, %d, %d)\n", a, b, c);
    else
        printf("No triple found.\n");
    
    return 0;
}
