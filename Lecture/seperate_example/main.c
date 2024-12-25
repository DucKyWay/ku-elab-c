#include <stdio.h>
#include "func.h"

// int my_sqr(int x); // global declaration

int main() {

    // int my_sqr(int x); local declaration

    int x = 7;

    puts("Hello!");
    printf("My Separate(%d) = %d\n", x, my_sqr(x));
    // undefined reference to `my_sqr' -> ไม่มีตัวตนของ my_sqr ใน main.c
}

// seperate compile step-by-step
// 
//  gcc -c main.c
//  gcc -c func.c
//  gcc main.o func.o -o main
//  ./main
//  
//  **if update once file**
//  gcc -c file_update_name.c
//  gcc main.o func.o -o main
//  ./main

// header file
// 1. สร้างไฟล์ .h ขึ้นมา
// 2. ใส่ prototype ของ function ที่จะใช้ในไฟล์ .c
// 3. ใส่ #ifndef และ #define และ #endif ในไฟล์ .h
// 4. ใส่ #include "func.h" ในไฟล์ .c