#include <stdio.h>

int main() {
    int x = 5;
    int *x_ptr = &x;

    printf("x = %d\n\n", x);
    printf("x_ptr = %p\n\n", x_ptr);
    printf("&x = %p\n\n", &x);

    printf("====================================\n\n");

    printf("*x_ptr = %d\n\n", *x_ptr);
    
    printf("====================================\n\n");

    *x_ptr = 10;
    printf("x = %d\n\n", x);
    printf("*x_ptr = %d\n\n", *x_ptr);
}