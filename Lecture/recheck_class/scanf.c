/* แนวข้อสอบ
    ข้อง่าย (เรื่องเดียว - 2 เรื่อง)
        output: puts printf 
        input: putchar

    ข้อยาก (หลายเรื่องปนกัน)
        test

*/

#include <stdio.h>

int str_len(char s[]) {
    
    int len = 0;

    for(len = 0; s[len] != '\0'; len++) 
        ;
    
    return len;
}

int has_a(char s[]) {
    
    int i;

    for(i = 0; s[i] != 'a' && s[i] != 0; i++)
        ;
    if(s[i] == 'a')
        return 1;
    else 
        return 0;

}



int main() { 
    
    // char str[20] = "hello, world";

    // printf("%d", str_len(str));

    /*
    if(has_a(str)) {
        printf("Have A");
    }
    else {
        printf("Not have A");
    }
    */

    /* fgets สามารถไม่ต้อง newline ได้ ถ้าจองที่ไว้พอดี */
    char str[20];
    int i;

    fgets(str, sizeof(str), stdin);

    printf("Before: ***%s***", str);

    i = 0;
    while(str[i] != '\n' && str[i] != 0)
        i++;
    str[i] = 0;

    printf("After:  ***%s***", str);

}