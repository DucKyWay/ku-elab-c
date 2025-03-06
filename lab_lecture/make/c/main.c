#include <stdlib.h>
#include <stdio.h>

int readInt();

int main() {
    int number = readInt();
    printf("Number: %d\n", number);
    return 0;
}

int readInt() {
    char str[12];
    fgets(str, 12, stdin);
    return atoi(str);
}