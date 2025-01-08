#include <stdio.h>
#include <stdlib.h>

void recursion_base_2 (int x) {
    if(x == 0) 
        return ; // is 0 return 0
    else {
        recursion_base_2(x / 2);
        printf("%d", x % 2);
    }
}

int main() {

    char n_in[1000];
    int n = atoi( fgets(n_in, 1000, stdin) );

    if(n != 0) recursion_base_2(n);
    else printf("0");

    return 0;
}