#include <stdio.h>

char *getline(char s[], int size) {

    char c;
    int i;

    while((c = getchar()) != '\n'){
        if(i < size)
            s[i++] = c;
        else    
            break;
    }
    s[i] = 0;

    return s;
}

int main() {

    char buf[20];

    getline(buf, sizeof(buf));
    printf("***%s***", buf);
    
}