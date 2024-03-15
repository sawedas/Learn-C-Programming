#include <stdio.h>
#include <stdlib.h>

typedef struct Product {
    char name[21];
    struct Product *next;
} Product;

Product *head = NULL;

void add_product(char *name) {
    Product *new_product = (Product *)malloc(sizeof(Product));
    strcpy(new_product->name, name);
    new_product->next = NULL;

    if (head == NULL) {
        head = new_product;
    }else {
        Product *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_product;
    }
}

int print_all_goods() {
    int count = 0;
    Product *current = head;

    while (current != NULL) {
        printf("%s\n", current->name);
        count++;
        current = current->next;
    }

    return count;
}

int main() {
    char name[21];

    while (1) {
        printf("Name: ");
        scanf("%s", name);

        if (strcmp(name, "done") == 0) {
            break;
        }

        add_product(name);
    }
    int total = print_all_goods();
    printf("Total = %d\n", total);
    return 0;
}
