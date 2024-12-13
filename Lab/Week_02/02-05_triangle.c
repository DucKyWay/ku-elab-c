#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    char a_in[10], b_in[10], c_in[10];
    
    printf("Enter length of side A: ");
    a = atof(fgets(a_in, sizeof(a_in), stdin));
    printf("Enter length of side B: ");
    b = atof(fgets(b_in, sizeof(b_in), stdin));
    printf("Enter length of side C: ");
    c = atof(fgets(c_in, sizeof(c_in), stdin));

    if(a <= 0 || b <= 0 || c <= 0) {
        puts("Triangle type is invalid.");
    }
    else if( a + b <= c || a + c <= b || b + c <= a) {
        puts("Triangle type is invalid.");
    }
    else if(a == b && b == c) {
        puts("Triangle type is equilateral.");
    }
    else if(a == b || a == c || b == c) {
        puts("Triangle type is isosceles.");
    }
    else {
        puts("Triangle type is scalene.");
    }

    return 0;
}