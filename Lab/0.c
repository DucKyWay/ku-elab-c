#include <stdio.h>

int charcount(char *s) {
   
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

void charweave(char *s,char *result) {

    int i = 0;
    int n = charcount(s);
	int left = -1, right = n;
    
    // Left
    for(i = 0; i < n; i+=2) {
        result[i] = s[++left];
    }
    for(i = 1; i < n; i+=2) {
        result[i] = s[--right];
    }

    //Right
    for(i = n; i < n*2+1; i+=2) {
        result[i] = s[right++];
    }
    for(i = n+1; i < n*2+1; i+=2) {
        result[i] = s[left--];
    }
}

int main()
{  char str[100],result[200];

   printf("String: ");
//    gets(str);   /* read a line of characters from the input to "str" variable */
   scanf("%[^\n]s", str);
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}