#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} Node;
Node *start = NULL;

void insert(Node *list) {

    Node *current = start;
    Node *previous = NULL;

    while(current != NULL && current->data < list->data) {
        previous = current;
        current = current->next;
    } 
    if(previous == NULL) {
        list->next = start;
        start = list;
    } else {
        previous->next = list;
        list->next = current;
    }

}
void delete(int n) { 
   
    Node *current = start;
    Node *previous = NULL; 

    while(current != NULL) {
        if(current->data == n) {
            Node *temp = current;
            if(previous == NULL)    start = current->next;
            else                    previous->next = current->next;
            current = current->next;
            free(temp); // free ด้วยอีเวร
        } else {
            previous = current;
            current = current->next; // skip
        }
    }
}
void print() {
    Node *curr = start;
    printf("[ ");
    while(curr) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("]\n");
}

int main() {
    Node *list;
    char type = 's';
    int num;
    
    while(type != 'q') {
        printf("input> ");
        scanf(" %c", &type);
        if(type == 'i') {
            scanf("%d", &num);
            list = (Node *)malloc(sizeof(Node));
            list->data = num;
            list->next = NULL;
            insert(list);
        } else if(type == 'd') {
            scanf("%d", &num);
            delete(num);
        } else if(type == 'p') {
            print();
        }
    }

    return 0;
}