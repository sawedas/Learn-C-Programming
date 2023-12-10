#include<stdio.h>
int main()
// 2.0 = ((1.75 * 21) + (x * 18)) / (21 + 18)
{
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;
    float re = ((requiredGrade * (preCredit + credit)) - (preGrade * preCredit)) / credit;
    printf("The GPA this semester should be %.2f", re);
    

    return 0;
}