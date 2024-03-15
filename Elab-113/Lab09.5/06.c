#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

void insert(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
    }else {
        Node *current = head;
        Node *prev = NULL;

        while (current != NULL && current->data < data) {
            prev = current;
            current = current->next;
        }

        if (prev == NULL) {
            new_node->next = head;
            head = new_node;
        }else {
            new_node->next = prev->next;
            prev->next = new_node;
        }
    }
}

void delete(int data) {
    Node *current = head;
    Node *prev = NULL;

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    while (current != NULL && current->data == data) {
        if (prev == NULL) {
            head = head->next;
        }else {
            prev->next = current->next;
        }
        Node *temp = current;
        current = current->next;
        free(temp);
    }
}

void print() {
    Node *current = head;
    
    printf("[ ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("]");

    printf("\n");
}

int main() {
    char command;
    int data;

    printf("input> ");

    while (1) {
        scanf("%c", &command);
        if (command == 'q') {
            break;
        }else if (command == 'p') {
            print();
            printf("input> ");
        }else if (command == 'i') {
            scanf("%d", &data);
            insert(data);
            printf("input> ");
        }else if (command == 'd') {
            scanf("%d", &data);
            delete(data);
            printf("input> ");
        }
    }

    return 0;
}