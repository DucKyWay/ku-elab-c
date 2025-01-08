/* 
    เขียนฟังก์ชันที่นับจำนวนอักขระในสตริง 
*/

#include <stdio.h>
#include <stdlib.h>

int str_len(char s[]) {
    
    int len;

    for(len = 0; s[len] != '\0'; len++);
    return len;
}

int main() {

    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    i = 0;
    while(str[i] != '\n' && str[i] != 0)
        i++;
    str[i] == 0;

    printf("Word: %s", str);
    printf("Word Count: %d", str_len(str));
}