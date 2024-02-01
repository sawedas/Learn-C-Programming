#include <stdio.h>

typedef struct
{
    double radius;
    int x;
    int y;
    char name[10];
} Circle;


int main(){
    int size = sizeof(Circle);
    printf("size = %d\n", size);
}