#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

typedef struct nodeType {
    int item;
    struct nodeType* next;
} Node;
Node *start = NULL;

void print() {
    Node *curr = start;
    for(int i = 0; i < SIZE; i++) { 
        printf("KEY %2d:", i);
        while(curr) {
            printf("%d ", curr->item);
            curr = curr->next;
        }
        printf("\n");
    }
}

void add(Node *list) {
    if (start == NULL)
        start = list;
    else {
        Node *current = start;
        while (current->next != NULL)
            current = current->next;
        current->next = list;
    }
    list->next = NULL;
}

int main() {
    Node *list;
    char type;
    int num;

    while(type != 'q') {
        printf("input> ");
        scanf(" %c", &type);
        if(type == 'p') {
            print();
        } else if(type == 'a') {
            scanf("%d", &num);
            list = (Node *)malloc(sizeof(Node));
            list->item = num;
            list->next = NULL;
            // add func
        }
    }
    return 0;
}

/*
input> a 42
input> a 53
input> a 66
input> a 28
input> a 59
input> a 91
input> p
KEY  0: 91 28 42 
KEY  1: 
KEY  2: 
KEY  3: 59 66 
KEY  4: 53 
KEY  5: 
KEY  6: 
*/