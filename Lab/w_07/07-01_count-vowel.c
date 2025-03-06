#include <stdio.h>

int main() {
    char s[100];
    int count = 0;

    printf("String (without a space): ");
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'A' || s[i] == 'a' ||
           s[i] == 'E' || s[i] == 'e' ||
           s[i] == 'I' || s[i] == 'i' || 
           s[i] == 'O' || s[i] == 'o' || 
           s[i] == 'U' || s[i] == 'u') {
            printf("%c ", s[i]);
			count++;
        }
    }

    printf("\nThis string contains %d vowel%s", count, count > 1 ? "s." : ".");

    return 0;
}