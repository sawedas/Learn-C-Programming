#include <stdio.h>
#include <stdlib.h>

#define SIZE 97

typedef struct nodeType {
    int item;
    struct nodeType *next;
} Node;

int hash(int data) {
    return data % SIZE;
}

Node *table[SIZE];

void add(int data) {
    int index = hash(data);

    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->item = data;
    new_node->next = NULL;
    
    new_node->next = table[index];
    table[index] = new_node;
}

void print() {
    for (int i = 0; i < SIZE; i++) {
        Node *current = table[i];

        printf("KEY %2d: ", i);

        while (current != NULL) {
            printf("%d ", current->item);
            current = current->next;
        }

        printf("\n");
    }
}

int main() {
    char command;
    int data;

    for (int i = 0; i < SIZE; i++) {
        table[i] = NULL;
    }

    printf("input> ");

    while (1) {
        scanf("%c", &command);

        if (command == 'q'){
            break;
        }else if (command == 'p') {
            print();
            printf("input> ");
        }else if (command == 'a') {
            scanf("%d", &data);
            add(data);
            printf("input> ");
        }
    }
    return 0;
}