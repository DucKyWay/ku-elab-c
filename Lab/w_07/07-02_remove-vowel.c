#include <stdio.h>

int remove_vowel(char *str) {
    int i = 0, j = 0; 
    while(str[i] != '\0') {
        if(str[i] != 'A' && str[i] != 'a' &&
           str[i] != 'E' && str[i] != 'e' &&
           str[i] != 'I' && str[i] != 'i' && 
           str[i] != 'O' && str[i] != 'o' && 
           str[i] != 'U' && str[i] != 'u') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    return 0;
}

int main()
{  char str[80];

  printf(" Input: ");
  fgets(str, 80, stdin);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}