#include <stdio.h>
#include <stdlib.h>


void rangoli(int n){
    int alphabet = 'a' + n - 1, count_row = 1, dash = (n * 2) - 2, minus = 0, reflex = 3;

    for (count_row; count_row < n; count_row++, minus += 2, reflex += 3)
        if (count_row == 1){
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            printf("%c", alphabet);
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            printf("\n");
        }else if (count_row < n && count_row != 1){
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            for (int i = 0 ; i <= count_row - 1; i++)
                printf("%c-", alphabet -  i);
            for (int i = count_row - 2; i >= 0; i--)
                if (i == 0){
                    printf("%c", alphabet);
                }else if (i > 0){
                    printf("%c-", alphabet - i);
                }
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            printf("\n");
        }
    
    for (count_row; count_row > 0; count_row--, minus -= 2, reflex -= 3)
        if (count_row == 1){
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            printf("%c", alphabet);
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            printf("\n");
        }else if (count_row <= n && count_row != 1){
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            for (int i = 0 ; i <= count_row - 1; i++)
                printf("%c-", alphabet -  i);
            for (int i = count_row - 2; i >= 0; i--)
                if (i == 0){
                    printf("%c", alphabet);
                }else if (i > 0){
                    printf("%c-", alphabet - i);
                }
            for (int i = 1; i <= dash - minus; i++)
                printf("-");
            printf("\n");
        }
}

int main(){
    char number_str[4];

    fgets(number_str, 4, stdin);

    int number = atoi(number_str);

    if (number <= 0 || number > 26){
        printf("-");
    }else{
        rangoli(number);
    }
}