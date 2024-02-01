#include <stdio.h>

int global = 10;

int main(){
    extern int my_func(int);

    printf("value return from my)func = %d\n", my_func(5));
}