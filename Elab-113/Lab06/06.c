#include<stdio.h>

int main(){
    char item[25] = "Computer Programming";
    char *a1 = item + 5, *a2;
    printf("%s\n",a1);
    a2 = item;
    printf("%s\n", a2);
    a2 = item + 8;
    printf("%s\n", a2);
    return 0;
}