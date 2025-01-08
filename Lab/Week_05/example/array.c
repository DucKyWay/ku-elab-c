#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[10];
    char str[20];

    printf("========= arr =========\n");
    for(int i = 0; i < 10; i++) {
        printf("[%d]: %d\n", i, arr[i]);
    }

    printf("========= array data =========\n");
    int data[] = {1, 1, 2, 3, 5};
    for(int i = 0; i < 5; ++i) {
        printf("[%d]: %d: %p\n", i, data[i], &data[i]);
    }

    printf("[%d]: %d: %p\n", -1, data[-1], &data[-1]);
    printf("[%d]: %d: %p\n", 5, data[5], &data[5]);

    return 0;
}