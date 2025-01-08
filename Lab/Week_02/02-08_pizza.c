#define _USE_MATH_DEFINES

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char p_size_in[5], p_pep_in[5], p_che_in[5], p_mush_in[5];
    int p_pep, p_che, p_mush;
    float p_size;
    float price;
    float extracost = 0;

    puts("Welcome to My Pizza Shop!!");
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    p_size = atof(fgets(p_size_in, sizeof(p_size_in), stdin));
    if(p_size == 1) p_size = 10;
    else if(p_size == 2) p_size = 16;
    else if(p_size == 3) p_size = 20;

    printf("Extra pepperoni? (1=yes, 0=no): ");
    p_pep = atoi(fgets(p_pep_in, sizeof(p_pep_in), stdin));
    if (p_pep == 1) extracost += 0.5;

    printf("Extra cheese? (1=yes, 0=no): ");
    p_che = atoi(fgets(p_che_in, sizeof(p_che_in), stdin));
    if (p_che == 1) extracost += 0.25;

    printf("Extra mushroom? (1=yes, 0=no): ");
    p_mush = atoi(fgets(p_mush_in, sizeof(p_mush_in), stdin));
    if (p_mush == 1) extracost += 0.3;

    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~");

    price = 1.5 * (
        5 + 
        (2 * (M_PI * (p_size*p_size) / 4)) + 
        (extracost * (M_PI * (p_size*p_size) / 4))
    );
    printf("Your order costs %.2f baht.\n", price);
    puts("Thank you.");

    return 0;
}