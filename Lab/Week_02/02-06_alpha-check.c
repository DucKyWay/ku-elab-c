#include <stdio.h>
#include <stdlib.h>

int main() {
    char alp;
    alp = getchar();

    if(alp >= 'A' && alp <= 'Z') printf("Output: upper case");
    else if(alp >= 'a' && alp <= 'z') printf("Output: lower case");
    else if(alp >= '0' && alp <= '9') printf("Output: digit");
    else printf("Output: others");

    return 0;
}