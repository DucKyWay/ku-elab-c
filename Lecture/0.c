#include <stdio.h>
#include <locale.h>

float isEven(int value);
/* 
    decare แค่บอกว่า function หน้าตาเป็นยังไง
    เพื่อทำให้ program รู้ก่อน ไม่ต้องเดาไม่ต้องไว้ข้างบนเสมอ
*/
    
int main() {
    
    int input;
    scanf("%d", &input);
    printf("%d is %s.", input, isEven(input) ? "Even" : "Odd");
}

float isEven(int value) {

    return !(value % 2);

    // if (value % 2 == 0) return 1;
    // else return 0;
}

