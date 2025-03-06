#include<stdio.h>
#include<string.h>

struct Word {
    char word[20];
    int count;
};

int main(){
    char input[21];
    int i, last_word = 0, find = 0;
    struct Word data[20] = {0};
    scanf("%20s", input);


    while(1){

        if(strcmp(input, "exit") == 0) break;
        
        int found = 0;
        for(int i = 0; i < last_word; i++) {
            if(strcmp(data[i].word, input) == 0) { // have
                data[i].count++;
                found = 1;
                break;
            }
        }
        if(!found && last_word < 20) { // dont have
            strcpy(data[last_word].word, input); // add name
            data[last_word].count = 1; // add count
            last_word++; // increase lastword
        }
        scanf("%20s", input);
    }


    printf("Output:\n");
    for(i=0;i<last_word;i++){
        printf("%s = %d\n", data[i].word, data[i].count);
    }
}