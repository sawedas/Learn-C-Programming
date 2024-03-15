#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Node
{
    int data;
    struct __Node *next;
};

typedef struct __Node Node;
typedef Node* List;

void insert(List *list, int value); // appendLast
void print(List list);
void printR(List list);
void delete(List* list, int value);

int main(){
    List head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 15);
    print(head);
    printf("\n");
    printR(head);
    printf("\n");
    delete(&head, 20);
    printR(head);
    printf("\n");
}

void delete(List* list, int value){
    List current = *list;
    List prev = NULL;

    while (current != NULL)
    {
        if (current->data == value) break;
        prev = current;
        current = current->next;
    }
    
    if (current == NULL){ //value not found in list
        return;
    }

    if (prev == NULL){
        *list = current->next;
        current->next = NULL;
        free(current);
        return;
    }

    prev->next = current->next;
    current->next = NULL;
    free(current);
}

void printR(List list){
    if (list == NULL) return;
    printf("[%d]->", list->data);
    printR(list->next);
    //printf("[%d]->", list->data); เป็น step ก่อนหลัง
}

void print(List list){
    List current = list;

    while (current != NULL){
        printf("[%d]->", current->data);
        current = current->next;
    }
}

void insert(List *list, int value){
    List node = (List) malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;

    if (*list == NULL){
        *list = node;
        return;
    }

    List current = *list;
    List prev = NULL;

    while (current != NULL)
    {
        prev = current;
        current = current->next;
    }
    prev->next = node;
}