#include <stdio.h>
#include <windows.h>

int main() {
    printf("Check Update...\n");
    for(int i = 0; i <= 10; i++) {
        printf(".");
        Sleep(500);
    }
    printf("\nNot have any updates.");
    
    return 0;
}