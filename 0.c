#include <stdio.h>

struct node {
    int data;
    struct node *next;
};


struct player {
    int id;
    int level;
};

int main() {
    
    struct player p1, *p_p1;
    p_p1 = &p1;

    p1.id = 2;
    p1.level = 3;

    printf("=================\n");
    printf("normal  : %d / level: %d\n", p1.id, p1.level);
    printf("pointer : %d / level: %d\n", (*p_p1).id, (*p_p1).level);
    printf("arrow p : %d / level: %d\n", p_p1->id, p_p1->level);

    printf("=================\n");

    struct node n, m = {1000, 0};

    printf("Size of node: %d\n", sizeof(struct node));
    printf("Size Data: %d\n", sizeof(n.data));
    printf("Size Next: %d\n", sizeof(n.next));

    n = m;
    printf("=== Before ===\n");
    printf("n.data: %d\n", n.data);
    printf("n.next: %d\n", n.next);
    n = (struct node){2000, 0};
    printf("=== After ===\n");
    printf("n.data: %d\n", n.data);
    printf("n.next: %d\n", n.next);

    return 0;
}