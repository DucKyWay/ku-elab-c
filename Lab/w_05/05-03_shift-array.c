#include <stdio.h>
#include <stdlib.h>

void shift_left(char str[], int n);

int main()
{  char str[80], *c;
   int n;

   printf("String: ");
   fgets(str, sizeof(str), stdin);
   for (c=str; *c && *c != '\n'; c++)
       ;
   *c = 0;
   printf("     n: ");
   scanf("%d", &n);
   shift_left(str, n);
   printf("Output: >>%s<<\n",str);
   return 0;
}

// ส่งเฉพาะ implementation ของฟังก์ชัน shift_left
void shift_left(char str[], int n) {
    
    int len = 0;
    while (str[len] != '\0') { //len loop
        len++;
    }
    if (len == 0) return ;

    n = n % len; // remove empty

    char temp[n];
    for (int i = 0; i < n; i++) { // เก็บ
        temp[i] = str[i]; 
    }

    for (int i = 0; i < len - n; i++) { // ลบ
        str[i] = str[i + n];
    }

    for (int i = 0; i < n; i++) { // ต่อ
        str[len - n + i] = temp[i];
    }

    str[len] = '\0';
}