#include <stdio.h>

typedef struct {
    char id[12];
    int score_mid, score_final;
}studentScore;

void calculateGrade(studentScore list[]){
    for (int i = 0; i < 5; i++){
        int sum_score = list[i].score_mid + list[i].score_final;

        if (sum_score >= 80){
            printf("Student ID %s receives grade A.\n", list[i].id);
        }else if (sum_score >= 70){
            printf("Student ID %s receives grade B.\n", list[i].id);
        }else if (sum_score >= 60){
            printf("Student ID %s receives grade C.\n", list[i].id);
        }else if (sum_score >= 50){
            printf("Student ID %s receives grade D.\n", list[i].id);
        }else if (sum_score < 50){
            printf("Student ID %s receives grade F.\n", list[i].id);
        }
    }
}

int main(){
    studentScore list[5];
    
    for (int i = 0; i < 5; i++){
        printf("Enter Student ID: ");
        scanf("%s", list[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &list[i].score_mid);
        printf("Enter Student Final: ");
        scanf("%d", &list[i].score_final);
    }

    calculateGrade(list);
}