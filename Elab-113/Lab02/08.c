#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char size_str[3], pep_str[3], cheese_str[3], mash_str[3];
    float area, cost, diameter;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str, 3, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pep_str, 3, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str, 3, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mash_str, 3, stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int size = atoi(size_str);
    int pep = atoi(pep_str);
    int cheese = atoi(cheese_str);
    int mash = atoi(mash_str);

    if (size == 1){
        diameter = 10;
    }else if (size == 2){
        diameter = 16;
    }else if (size == 3){
        diameter = 20;
    }

    diameter = pow(diameter, 2);
    area = M_PI * (diameter / 4);
    cost = 5 + (2 * area);

    if (pep == 0 && cheese == 0 && mash == 0){
        ;
    }else{
        if (pep == 1){
            cost += 0.5 * area;
        }if (cheese == 1){
            cost += 0.25 * area;
        }if (mash == 1){
            cost += 0.30 * area;
        }
    }


    printf("Your order costs %.2f baht.\nThank you.", (1.5 * cost));

}