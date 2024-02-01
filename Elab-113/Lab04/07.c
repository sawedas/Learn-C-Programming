#include <stdio.h>
#include <stdlib.h>

void print_row(int n_row){
    int count, i;

    for (count = 1; count < n_row; count++){
        for (i = 1; i <= count; i++){
            printf("*");
        }
        printf("\n");
    }

    for (count; count > 0; count--){
        for (i = 1; i <= count; i++){
           printf("*"); 
        }
        printf("\n");
    }
    
}

int main(){
    char row_str[5];

    fgets(row_str, 5, stdin);

    int row = atoi(row_str);

    print_row(row);
}