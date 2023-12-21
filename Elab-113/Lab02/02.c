#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stamp1[4], amonut1[10];
    //int percent;
    float discount, percent;

    fgets(stamp1, 4, stdin);
    fgets(amonut1, 10, stdin);

    int stamp = atoi(stamp1);
    float amonut = atof(amonut1);

    if (stamp >= 9)
    {
        percent = 40.0;
        stamp -= 9; 
    } else if (stamp >= 6)
    {
        percent = 30.0;
        stamp -= 6; 
    }else if (stamp >= 3)
    {
        percent = 20.0;
        stamp -= 3; 
    }else if (stamp == 2)
    {
        percent = 15.0;
        stamp -= 2; 
    }else if (stamp == 1)
    {
        percent = 10.0;
        stamp -= 1; 
    }else
    {
        percent = 0.0;
        stamp = 0;
    }
    
    
    discount = amonut * (percent / 100.0);
    printf("You get %.0f percents discount.\n", percent);
    printf("Total amount due is %.2f Baht.\n", amonut - discount);
    printf("And you have %d stickers left.\n", stamp);
    return 0;
}