#include <stdio.h>
#include <stdlib.h>

int main(){
    char amount_str[10], earn_str[10];

    printf("Enter your goal amount: ");
    fgets(amount_str, 10, stdin);
    printf("Enter money collected today: ");
    fgets(earn_str, 10, stdin);

    double amount = atof(amount_str), earn = atof(earn_str), goal;
    int count = 1;

    if (earn <= amount){
        printf("Total money collected up to day 1 is %.2f. You need %.2f more.\n", earn, amount - earn);
    }

    for (goal = earn; goal < amount; goal += earn)
        if (goal != amount){
            printf("Enter money collected today: ");
            fgets(earn_str, 10, stdin);
            earn = atof(earn_str);
            count += 1;
            if ((amount - (goal + earn)) > 0){
                printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", count, goal + earn, amount - (goal + earn));
            }
        }
    
    if (count != 1){
        printf("Congratulations! You take %d days to reach your goal.", count);
    }else if (count == 1){
        printf("Congratulations! You take %d day to reach your goal.", count);
    }
}
        