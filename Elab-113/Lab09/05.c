#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

void printList(node *pList) {
    int tempData;
    node *run = pList;
    node *cpy = pList;
    node *tempList;

    for (; cpy->next != NULL; cpy = cpy->next) {
        for(tempList = cpy -> next;tempList != NULL;tempList = tempList -> next){
			if(cpy -> data > tempList -> data){
				tempData = cpy -> data;
				cpy -> data = tempList -> data;
				tempList -> data = tempData;
			}
		}
    }

    while(run != NULL){
		printf("%d ",run -> data);
		run = run -> next;
	}
}

void insertNode(node **list, int val) {
    node *cpy;
    node *tmp = malloc(sizeof(node));

    tmp->data = val;
    tmp->next = NULL;
    cpy = *list;

    if (*list == NULL) {
        *list = tmp;
    }else {
        while (cpy->next != NULL) {
            cpy = cpy->next;
        }
        cpy->next = tmp;
    }
}

int main() {
    int i, value;
    node *pList = NULL;

    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        insertNode(&pList,value);
    }

    printList(pList);
}