#include <stdio.h>

int main() {
    char s[100], vowel[100] = {'\0'};
    int count = 0;

    printf("String (without a space): ");
    scanf("%s", s);

    int i = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'A' || s[i] == 'a' ||
           s[i] == 'E' || s[i] == 'e' ||
           s[i] == 'I' || s[i] == 'i' || 
           s[i] == 'O' || s[i] == 'o' || 
           s[i] == 'U' || s[i] == 'u') {
            vowel[count++] = s[i];
        }
    }
    vowel[count] = '\0';

    for(int i = 0; i < count; i++) {
        printf("%c ",  vowel[i]);
    }
    printf("\nThis string contains %d vowel%c.", count, count > 1 ? 's' : '\0');

    return 0;
}