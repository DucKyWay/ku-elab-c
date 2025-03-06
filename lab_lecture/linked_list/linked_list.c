#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Node {
    int data;
    struct __Node *next;
}

typedef struct __Node Node;
typedef Node* List;

void insert(List *list, int value);
void print(List list);
void printWhile(List list);
void insertFirst(List* list, int value);

int main() {

    List head = NULL; //null เป็น adress ตัวนึง
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 15);
    print(head);
    printWhile(head);

    return 0;
}

void printWhile(List list) {

    List *current = list;
    while(current != NULL) {
        printf("[%d]->", current->data);
        current = current->next;
    }
    print("\n");
}

void print(List list) {
    if(list == NULL) {
        printf("\n")
        return ;
    }
    printf("[%d]->", current->data);
}

void insert(List list, int value) {

    /* สร้าง node ลอย ๆ */
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    /* ใส่ข้อมูลเข้าไปใน List */
    if(*list == NULL) {
        *list = newNode;
        return;
    }

    Node* current = *list; // ชี้ไปต้น List
    Node* previous = NULL;
    while(&current != NULL) {
        previous = current;
        current = current->next; // ขยับ
    }
}

void insertFirst(List List, int value) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL; // newNode

    Node* current = *list;
    Node* previous = NULL;
    
}