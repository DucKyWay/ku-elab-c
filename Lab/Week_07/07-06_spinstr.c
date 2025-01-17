#include <stdio.h>

int charcount(char *s) {
   
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
    return i;
}

void charweave(char *s,char *result) {

    int i = 0;
    int n = charcount(s);
	int left = -1, right = n;
    
    // Left
    // printf("right: %d left: %d\n", right, left);
    for(i = 0; i < n; i+=2) {
        result[i] = s[++left];
    }
    for(i = 1; i < n; i+=2) {
        result[i] = s[--right];
    }

    //Right
    if(n % 2 != 0) {
        left = (n/2) + 1;
        right = (n/2);
    }
    // printf("right: %d left: %d\rright: ", right, left);
    if(n % 2 == 0) {
        for(i = n; i <= n*2+1; i+=2) {
            result[i] = s[right++];
            // printf("r: %d ", right-1);
        }
        // printf("\nleft: ");
        for(i = n+1; i <= n*2+1; i+=2) {
            result[i] = s[left--];
            // printf("l: %d ", left+1);
        } 
    } else {
        // printf("\right: ");
        for(i = n; i < n*2; i+=2) {
            result[i] = s[right--];
            // printf("r: %d ", right+1);
        }
        // printf("\nleft: ");
        for(i = n+1; i <= n*2+1; i+=2) {
            result[i] = s[left++];
            // printf("l: %d ", left-1);
        } 
    }    
    // printf("\nright: %d left: %d\n", right, left);
}

int main()
{  char str[100],result[200];

   printf("String: ");
   fgets(str, sizeof(str), stdin);
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}