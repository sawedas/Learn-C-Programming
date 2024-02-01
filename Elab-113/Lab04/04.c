#include <stdio.h>
#include <stdlib.h>

void print_sq (int row, int colum){
    int count_r, count_c, space_mid = colum - 2;

    for (count_r = 1; count_r <= row; count_r++)
        if (count_r == 1){
            for (int i = 0; i < colum; i++)
                printf("*");
            printf("\n");
        }else if (count_r < row && count_r != 1){
            for (int i = 1; i < count_r; i++)
                printf(" ");
            printf("*");
            for (int i = 1; i <= space_mid; i++)
                printf(" ");
            printf("*\n");
        }else if (count_r == row){
            for (int i = 1; i <= row - 1; i++)
                printf(" ");
            for (int i = 0; i < colum; i++)
                printf("*");
        }
}

int main(){
    char x_str[10], y_str[10];

    fgets(x_str, 10, stdin);
    fgets(y_str, 10, stdin);

    int x = atoi(x_str), y = atoi(y_str);

    if (x >= 4 && y >= 4){
        print_sq(y, x);
    }
    
}