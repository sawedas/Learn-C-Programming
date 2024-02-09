#include <stdio.h>

int main()
{
    int amount = 0, check = 1, count_target = 0, i = 0, j = 0;
    scanf("%d", &amount);
    int number[100], target[100];
    for (int n = 0; n < amount; n++){
        int input_number = 0;
        scanf("%d", &input_number);
        number[n] = input_number;
    }

    for (i = 0; check; i++){
        int input_target = 0;
        scanf("%d", &input_target);
        count_target += 1;
        if (input_target == -1){
            break;
        }else if (input_target != -1){
            target[i] = input_target;
        }
    }
    
    for (i = 0; i < count_target; i++){
        int count_more = 0;
        for (j = 0; j < amount; j++){
            if (number[j] > target[i] && target[i] != '\0'){
                printf("%d ", j + 1);
                count_more += 1;
            }
        }
        if (count_more == 0 && target[i] != 0){
            printf("0 ");
        }else if (target[i] != 0){
            printf("\n");
        }
    }
}