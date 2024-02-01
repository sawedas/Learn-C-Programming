#include <stdio.h>
#include <stdlib.h>

void dtob(int dec){
    int count;
    for (count = 3; count >= 0; count--)
        printf("%d", (dec >> count) & 1);
    printf(".");
}

int main()
{
    char decimal_str[4];

    fgets(decimal_str, 4, stdin);

    int decimal = atoi(decimal_str);

    printf("Binary number of %d is ", decimal);
    dtob(decimal);
}