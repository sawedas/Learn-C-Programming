#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

int main() {
    // allocate memory
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    // assign data
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;

    // link node
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // print link list
    for (Node *node = n1; node != NULL; node = node->next) {
        printf("%d\n", node->data);
    }
}