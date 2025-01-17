#include <stdio.h>
#include <stdlib.h>

void str_extract(char** source, char** vowel);

int main() {
    char* str = malloc(201);
    scanf("%[^\n]s", str);
    char* vowel = NULL;

    str_extract(&str, &vowel);

    printf("Consonants: \"%s\"\n", str);
    printf("    Vowels: \"%s\"\n", vowel);

    free(str);
    free(vowel);
    return 0;
}

void str_extract(char** source, char** vowel) {
	
	char* src = *source;
	*vowel = malloc(sizeof(source) + 1);
	char* vwl = *vowel;
    int i = 0, j = 0, k = 0;

    while (src[i] != '\0') {
        if (src[i] == 'A' || src[i] == 'a' ||
            src[i] == 'E' || src[i] == 'e' ||
            src[i] == 'I' || src[i] == 'i' ||
            src[i] == 'O' || src[i] == 'o' ||
            src[i] == 'U' || src[i] == 'u') {
            vwl[j++] = src[i];
        } else {
            src[k++] = src[i];
        }
        i++;
    }

    vwl[j] = '\0';
    src[k] = '\0';
}