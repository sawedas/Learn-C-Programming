#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salary_str[20];
    float tax;

    //input salary
    fgets(salary_str, 20, stdin);

    //string to float
    float salary = atof(salary_str);

    if (salary <= 300000 && salary >= 0){
        tax += salary * 0.05;
        printf("%.2f", tax);
    } else if (salary > 300000){
        tax += 15000;
        salary -= 300000;
        tax += salary * 0.1;
        printf("%.2f", tax);
    } else if (salary < 0){
        printf("Error: Salary must be greater or equal to 0");
    }
    return 0;
}