#include <stdio.h>

// struct
typedef struct node Node;
struct node {
    int data;
    Node *next;
};

int main(){
    Node n1, n2, n3;

    // assign data
    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    // link the nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    // print the linklist
    for (Node *node = &n1; node != NULL; node = node->next) {
        printf("%d\n", node->data);
    }
}