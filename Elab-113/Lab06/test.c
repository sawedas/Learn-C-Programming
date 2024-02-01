#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a, *b;

    a = (int *)malloc(6 * sizeof(int));
    int c[6] = {10, 20, 30};
    int s[] = {"uni", 1};

    printf("Address c = %p\n", &c);
    printf("Address c[0] = %p\n", &c[0]);
    printf("Address c[1] = %p\n", &c[1]);
    printf("Address a = %p\n", a);
    printf("Address a[0] = %p\n", &a[0]);
    printf("Address a[1] = %p\n", &a[1]);
    printf("%d\n", sizeof(long));
    //printf("%s", s[0]);

}