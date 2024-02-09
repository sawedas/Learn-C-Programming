#include <stdio.h>

int main(){
    char str[1000] = "";
    int amount_sara = 0;
    printf("String (without a space): ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'A'){
            amount_sara++;
            printf("%c ", str[i]);
        }else if (str[i] == 'e' || str[i] == 'E'){
            amount_sara++;
            printf("%c ", str[i]);
        }else if (str[i] == 'i' || str[i] == 'I'){
            amount_sara++;
            printf("%c ", str[i]);
        }else if (str[i] == 'o' || str[i] == 'O'){
            amount_sara++;
            printf("%c ", str[i]);
        }else if (str[i] == 'u' || str[i] == 'U'){
            amount_sara++;
            printf("%c ", str[i]);
        }
    }
    printf("\n");
    if (amount_sara > 1){
        printf("This string contains %d vowels.", amount_sara);
    }else if (amount_sara >= 0){
        printf("This string contains %d vowel.", amount_sara);
    }
}