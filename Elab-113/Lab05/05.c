#include <stdio.h>

void print_row(int rows){
    int count_row = 1, i = 0;

    for (; count_row < rows; count_row++){
        for (i = 0; i < count_row; i++){
            if (i % 2 == 0){
                printf("-");
            }else if (i % 2 != 0){
                printf("x");
            }
        }
        printf("\n");
    }

    for (; count_row > 0; count_row--){
        for (i = 0; i < count_row; i++){
            if (i % 2 == 0){
                printf("-");
            }else if (i % 2 != 0){
                printf("x");
            }
        }
        printf("\n");
    }
}

int main(){
    int number = 0;
    printf("Enter n: ");
    scanf("%d", &number);

    if (number > 0){
        print_row(number);
    }
}