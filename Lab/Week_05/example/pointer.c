#include <stdio.h>
#include <stdlib.h>

int cubeByValue(int n);
int cubeByReference(int *n);

/*
result: 1000
num: 10
===========
result: 125
num: 125
===========
*/

int main() {

    int num = 10;
    int result = cubeByValue(num);

    printf("result: %d\n", result);
    printf("num: %d\n", num);
    printf("===========\n");

    int numR = 5;
    result = cubeByReference(&numR);

    printf("result: %d\n", result);
    printf("num: %d\n", numR);
    printf("===========\n");


    return 0;
}

int cubeByValue(int n) {
    n = n * n * n;
    return n;
}

int cubeByReference(int *n) {
    *n = *n * *n * *n;
    return *n;
}
