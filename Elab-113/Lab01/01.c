#include <stdio.h>

int main()
{
    int computer_time = 1678;
    int computer_days = computer_time / 1440;
    int computer_hours = (computer_time - (computer_days * 1440)) / 60;
    int computer_min = computer_time - ((computer_days * 1440)+(computer_hours * 60));
    printf("It is %d days %d hours and %d minutes.", computer_days, computer_hours, computer_min);
}