#include <stdio.h>
//dinner for five
int main(){
    int amount = 0, n1, n2, n3, n4;
    scanf("%d", &amount);
    char sum_score[sizeof(amount)] = "";

    for (int i = 0; i < amount; i++){
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
        sum_score[i] = n1 + n2 + n3 + n4;
    }
    
    int most = 0, most_idx = 0;
    for (int i = 0; i < amount; i++){
        if (sum_score[i] > most){
            most = sum_score[i];
            most_idx = i + 1;
        }
    }

    printf("%d %d", most_idx, most);
}