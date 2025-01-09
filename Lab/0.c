#include <stdio.h>

int charcount(char *s) {
   
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

void charweave(char *s,char *result) {
// 1, n, 2, n-1, 3, n-2, 3, n-3

/*
String: hello, world
Output: hdellrloow,  ,woolrlledh
String: 12345
Output: 1524334251

*/
    int i = 0, find = -1;
    int n = charcount(s);
    
    // Left
    for(i = 0; i < n; i+=2) {
        result[i] = s[++find];
    }
    if(find % 2 == 0) find+=2;
    for(i = 1; i < n; i+= 2) {
        result[i] = s[find--];
    }

    //Right
}

int main()
{  char str[100],result[200];

   printf("String: ");
//    gets(str);   /* read a line of characters from the input to "str" variable */
   scanf("%s", str);
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}