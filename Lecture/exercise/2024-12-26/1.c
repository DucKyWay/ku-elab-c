/* 
    เขียนโปรแกรมที่รับตัวเลขจำนวนเต็ม และตรวจสอบว่าตัวเลขนั้นเป็นจำนวนเต็มบวกหรือลบ 
*/

#include <stdio.h>
#include <stdlib.h>

char check_number(int x) {

    if(x > 0) {
        return 'P';
    } else if(x == 0) {
        return '0';
    } else {
        return 'M';
    }
}

int main() {

    char num_in[100];
    int num = atoi( fgets(num_in, sizeof(num_in), stdin) );

    printf("%c", check_number(num));
}