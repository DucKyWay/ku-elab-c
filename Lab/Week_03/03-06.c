#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

int main() {
    float x, y;
    char x_in[100], y_in[100];
    
    printf("Input x: ");
    x = atof(fgets(x_in, 100, stdin));
    printf("Input y: ");
    y = atof(fgets(y_in, 100, stdin));

    printf("x = %.4f, y = %.4f", x, y);
    printf("[a]:Add [s]:Subtract [m]:Multiply [d]:Divide [M]:modulo [^]: x ^ y");
    
    

    return 0;
}