#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

void printList(node *pList) {
    node *current = pList;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

void insertNode(node **pList, int value) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;

    if (*pList == NULL || (*pList)->value >= value) {
        new_node->next = *pList;
        *pList = new_node;
        return;
    }

    node *current = *pList;
    while (current->next != NULL && current->next->value < value) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        
        insertNode(&pList, value);
    }

    printList(pList);
}