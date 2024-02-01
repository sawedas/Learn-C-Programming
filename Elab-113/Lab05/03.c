//scanf("%c", &x)
//scanf("/n%c", &y)
#include <stdio.h>

int main(){
    double value = 0;
    int check = 1;
    printf("Initial Value: ");
    scanf("%lf", &value);

    while (check){
        char op;
        double input;
        printf("\nOperator: ");
        scanf("%s", &op);
        if ((op == '+') || (op == '-') || (op == '*') || (op == '/')){
            printf("Input Value: ");
            scanf("\n%lf", &input);
        }else{
            printf("\nFinish Calculation. Final Value is %.4lf\n", value);
            check = 0;
        }
        

        if (op == '+'){
            value += input;
            printf("Present Value is %.4lf\n", value);
            check = 1;
        }else if (op == '-'){
            value -= input;
            printf("Present Value is %.4lf\n", value);
            check = 1;
        }else if (op == '*'){
            value *= input;
            printf("Present Value is %.4lf\n", value);
            check = 1;
        }else if (op == '/'){
            value /= input;
            printf("Present Value is %.4lf\n", value);
            check = 1;
        }
    }
}