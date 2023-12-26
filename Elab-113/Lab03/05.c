#include <stdio.h>
#include <stdlib.h>

int main()
{
    char count_str[3];

    fgets(count_str, 3, stdin);

    int count = atoi(count_str);
    int i = atoi(count_str);
    int start = 97;

    if (i <= 0 || i > 26){
        printf("-");
    }else if (i > 1){
        for (; count >= -i; count--){
            if (count > 0){
                printf("%c-", (start - 1) + count);
            }else if (count < 0 && count > -i + 1){
                printf("%c-", start - count);
            }else if (count == -i + 1){
                printf("%c", start - count);
            }
        }  
    }else if (i == 1){
        printf("a");
    }
}