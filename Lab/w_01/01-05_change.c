#include <stdio.h>

int main () {
    int amount = 98;
    int fifty = 0;
    int twenty = 0;
    int five = 0;
    int one = 0;

    fifty = amount / 50;
    amount %= 50;
    twenty = amount / 20;
    amount %= 20;
    five = amount / 5;
    amount %= 5;
    one = amount % 5;

    printf("1: %d\n5: %d\n20: %d\n50: %d",  one, five, twenty, fifty);
    return 0;
}