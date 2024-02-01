#include <stdio.h>

int main(){
    int amount_subject = 0, credit = 0, i = 1;
    char grade;
    float gpa = 0.0, sumcredit = 0.0;

    printf("Enter number of subject(s): ");
    scanf("%d", &amount_subject);

    if ( amount_subject >= 1){
        while (i <= amount_subject){
            printf("Enter credit,grade for subject #%d: ", i);
            scanf("%d,%c", &credit, &grade);

            if (grade == 'a' || grade == 'A'){
                gpa += credit * 4;
            }else if (grade == 'B' || grade == 'b'){
                gpa += credit * 3;
            }else if (grade == 'C' || grade == 'c'){
                gpa += credit * 2;
            }else if (grade == 'D' || grade == 'd'){
                gpa += credit * 1;
            }else if (grade == 'F' || grade == 'f'){
                gpa += credit * 0;
            }

            sumcredit += credit;
            i += 1;
        }
        printf("GPA = %0.2f", (gpa / sumcredit));
    }
}