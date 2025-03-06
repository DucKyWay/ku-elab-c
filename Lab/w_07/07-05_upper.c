#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char* s) {
    
    char* result = malloc(100 * sizeof(char));
    
    int i;
    for (i = 0; i < 100 && s[i] != '\0'; i++) {
        if (islower(s[i])) {
            result[i] = toupper(s[i]);
        }
        else {
            result[i] = s[i];
        }
    }

    result[i] = '\0';
    return result;
}

int main(){

	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
    if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}