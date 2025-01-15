#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio);

int main() {
    
    unsigned int n;
    double golden_ratio = 0;

    scanf("%d", &n);
    
    unsigned long *fib_array = fibo_array(n, &golden_ratio);
    for (int i = 0; i < n; i++) {
        printf("%lu ", fib_array[i]);
    }
    printf("\n%f", golden_ratio);

    free(fib_array);
    return 0;
}

unsigned long *fibo_array(unsigned int n, double *golden_ratio) {
    if(n < 2)
        return NULL;

    unsigned long *fib_array = (unsigned long *)malloc((n + 2) * sizeof(unsigned long));

    fib_array[0] = 0; // fibo 0
    fib_array[1] = 1; // fibo 1
    for (unsigned int i = 2; i < n + 2; i++) // fibo n
        fib_array[i] = fib_array[i - 1] + fib_array[i - 2];

    *golden_ratio = (double)fib_array[n + 1] / (double)fib_array[n];

    return fib_array;
}