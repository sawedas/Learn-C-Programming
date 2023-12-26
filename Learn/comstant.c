//constant must start data aways. (Standard constant name should always upper charecters.)

#include <stdio.h>

//Defined constant
#define GPA 4.00
#define ID 001
int main()
{
    //literal constant make after "", [this is literal constant]
    printf("Hello, My name is %s.\n", "Tachit");
    printf("I'm %d years old.\n", 19);
    //defined constant output
    printf("My ID is %03d.\n", ID);
    printf("My GPA is %.2f\n", GPA);
    //Memory constant = don't change always program.
    const float weight = 76.5;
    const int hight = 177;
    printf("My tall and weight is %.2f and %d", weight, hight);
}