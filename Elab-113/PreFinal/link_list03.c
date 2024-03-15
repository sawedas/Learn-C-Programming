#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    Node *next;
};

typedef struct node Node;

void *createNode();

void appendNode (int **head, int data) {
    // step 1: Create Node
    Node *newNode = createNode(data);

    // step 2: Append node
    // Case 1: empty
    if (*head == NULL){
        *head = newNode;
        return;
    }
    // Case 2: not empty
    Node *node = *head;
    while (node != NULL) {
        if (node->next == NULL){
            node->next = newNode;
            return;
        }
    }
}

void deleteNode(Node **head, int data) {
    // step 1: Find the node to delete
    Node *prev = NULL;
    Node *target = *head;

    while (target != NULL){
        if (target->data == data){
            break;
        }
        prev = target;
        target = target->next;
    }

    // step 2: Check the node exits
    if (target == NULL){
        return;
    }

    // step 3: delete node 
    //case 1: delete first node
    if (target == *head) {
        *head = target->next;
        free(target);
        return;
    }
    //case 2: delete the last or middle node
    
    

}


void printLinkList(){

}


int main() {
    Node *list = NULL;

    //append node 
}