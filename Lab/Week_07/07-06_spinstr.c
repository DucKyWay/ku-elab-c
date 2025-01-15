#include <stdio.h>

int charcount(char *s) {
   
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

void charweave(char *s,char *result) {

    int i = 0, pos = -1;
    int n = charcount(s);
    
    // Left
    for(i = 0; i < n; i+=2)
        result[i] = s[++pos];
    if(pos % 2 == 0) pos+=2;
    for(i = 1; i < n; i+=2)
        result[i] = s[pos--];

    //Right
    pos = -1;
    for(i = n*2-1; i >= n; i-=2)
        result[i] = s[++pos];
    if(pos % 2 == 0) pos+=2;
    for(i = n*2-2; i >= n; i-=2)
        result[i] = s[pos--];
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