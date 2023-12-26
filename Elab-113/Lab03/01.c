#include <stdio.h>
#include <stdlib.h>

int decrese(int x)
{
    if (x == -1){
        return 0;
    }else{
        printf("%d\n", x);
        return decrese(x - 1);
    }
}

int main()
{
    char num_str[3];

    fgets(num_str, 3, stdin);

    int num = atoi(num_str);

    decrese(num);
}