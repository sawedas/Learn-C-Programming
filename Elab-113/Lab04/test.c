#include <stdio.h>

int main(){
    int i, o;

    for (i = 0; i <= 10; i++){
        for (o = 0; o <= 10; o++){
            printf("%c-", 97 + i);
        }    
        printf("\n");
    }
        
}