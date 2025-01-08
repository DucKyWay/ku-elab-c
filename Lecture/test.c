// #include <stdio.h> -> Compiler Directive ตัว sth. ที่มี # อยู่ข้างหน้า
#include <stdio.h>
#include <unistd.h>

#define CONS_NAJA 0

int main() {
    int layer; //32 bit
    int test[10]; // 10 pos
    printf("Please type your need layer: ");
    scanf("%d", &layer);
    
    /*
    %d = Decimal
    %f = Float
    %c = Character
    %s = String
    */
    printf("%d %c %f %c %s\n", 10, 'A', 2.0, 66, "test");
    
    puts("Hello, World! This is Pyramid test!");
    // for(int i=0; i<= layer; i++) {
    //     for(int j=layer-i; j>=0; j--) {
    //         printf(" ");
    //     }
    //     for(int j=0; j<=i; j++) {
    //         printf("*");
    //     }
    //     for(int j=0; j<i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    char Test = 'A' + 1;
    printf("%c", Test);
    return 0;
}
/* test */
