#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char input_in[4];
    int input = atoi( fgets(input_in, 4, stdin) );
 
    int d0 = input & 1; // 15 = 111 & 001 = 001
    int d1 = input >> 1 & 1; //
    int d2 = input >> 2 & 1; 
    int d3 = input >> 3 & 1;

    printf("Binary number of %d is %d%d%d%d.", input, d3, d2, d1, d0);
    
    return 0;
}