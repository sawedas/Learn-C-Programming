#include <stdio.h>
#include <stdlib.h>

void dec_bi(int dec){
    if (dec == 0){
        ;
    }else{
        dec_bi(dec / 2);
        printf("%d", dec % 2);
    }
}

int main(){
    char num_str[5];

    fgets(num_str, 5, stdin);

    int num = atoi(num_str);

    if (num == 0){
        printf("0");
    }else if (num > 0){
        dec_bi(num);
    }
    
}