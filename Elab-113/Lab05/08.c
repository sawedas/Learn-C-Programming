#include <stdio.h>

void play_stairs(int n){
    int i, j, count_r = 1, check = 1;
    char board[n][5];

    //Make Stairs
    for (i = 0; i < n; i++){
        for (j = 0; j < 5; j++){
            if ((j == 0) || (j == 4)){
                board[i][j] = '|';
            }else{
                board[i][j] = '-';
            }
        }
    }

    int head = n - 2, leg = n - 1;
    printf("---- round %d ----\n", count_r);
    count_r += 1 ;
    for (i = 0; i < n; i++){
        for (j = 0; j < 5; j++){
            if (i == head && j == 2){
                printf("O");
            }else if (i == leg && j == 2){
                printf("^");
            }else{
                printf("%c", board[i][j]);
            }
        }
        printf("\n");
    }
    
    while (check){
        printf("Input step command: ");
        int step;
        scanf("%d", &step);
        
        if (step == 0){
            check = 0;
            break;
        }else if (head - step >= 0 && leg - step <= n - 1){
            head -= step;
            leg -= step;
            check = 1;
        }else if (head - step < 0){
            head = 0;
            leg = 1;
        }else if (leg - step > n - 1){
            head = n - 2;
            leg = n - 1;
        }

        printf("---- round %d ----\n", count_r);
        count_r += 1;
        for (i = 0; i < n; i++){
            for (j = 0; j < 5; j++){
                if (i == head && j == 2){
                    printf("O");
                }else if (i == leg && j == 2){
                    printf("^");
                }else{
                    printf("%c", board[i][j]);
                }
            }
            printf("\n");
        }
    }

}

int main(){
    int stairs;
    printf("Input number of stairs: ");
    scanf("%d", &stairs);

    if (stairs >= 2){
        play_stairs(stairs);
    }
    
}