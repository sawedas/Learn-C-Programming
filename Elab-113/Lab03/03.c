#include <stdio.h>
#include <stdlib.h>

long long low(long long x, long long y)
{
    int i;
    while (y != 0)
    {
        i = y;
        y = x % y;
        x = i;
    }
    return x;
}

int main()
{
    char x_input[7], y_input[7];

    fgets(x_input, 7, stdin);
    fgets(y_input, 7, stdin);

    long long x = atoll(x_input);
    long long y = atoll(y_input);

    long long gcd = low(x, y);
    
    if (x % y == 0){
        printf("= %lld", x / y);
    }else{
        printf("= %lld/%lld", x / gcd, y / gcd);
    }
}