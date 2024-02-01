#include <stdio.h>

int my_func(int arg)
{
    extern int global;

    printf("inside my_func(): global = %d\n", global);

    return arg + arg;
}