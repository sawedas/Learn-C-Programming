#include <stdio.h>

double find_pi(long n){
    double value = 0, count = 1.0;

    for (int i = 0; i < n; i++, count += 2.0){
        double fraction = 4 / count;
        if (i % 2 == 0){
            value += fraction;
        }else if (i % 2 != 0){
            value -= fraction;
        }
    }
    return value;
    
}

int main(){
    long number;
    printf("Enter n: ");
    scanf("%ld", &number);

    if (number > 0){
        printf("%.10lf", find_pi(number));
    }
}