#include <stdio.h>
#include <stdlib.h>

char* check_chain(char **arr, int length, int amount)
{
    for (int i = 0; i < amount - 1; i++){
        int err = 0;
        for (int j = 0; j < length; j++) {
            if (arr[i][j] != arr[i + 1][j]) {
                err++;
            }
        }
        if (err > 2) {
            return arr[i];
        }
    }
    return arr[amount - 1];
}

int main()
{
    int length_word = 0, amount_word = 0;
    scanf("%d", &length_word);
    scanf("%d", &amount_word);

    char** arr_word = malloc(sizeof(char*) * amount_word);

    for (int i = 0; i < amount_word; i++){
        arr_word[i] = malloc(length_word + 1);
        scanf("%s", arr_word[i]);
    }

    printf("%s", check_chain(arr_word, length_word, amount_word));

    for (int i = 0; i < amount_word; i++){
        free(arr_word[i]); 
    }
    free(arr_word); 
}
