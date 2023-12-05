#include <stdio.h>
#include <stdbool.h> //import boolean

int main()
{
    //type name_variable = start
    int age = 19; //name_variable first charecter not number or special charecter unless _ (underscore)
    char gender = 'm';//upper and lower character are difference meaning = case sensitive
    char Gender = 'M';
    float gpa = 3.86;
    //char name_variable[amount of charecter] = "string" <-- How make variable keep string data?
    char name[6] = "Tachit";
    char surname[10] = "Julamphan", nick_name[3] = "Tar"; //if you will make variable same type you can make same line to make it.
    bool status = true;
    //change data in existing variable
    gpa = 3.96;

    //Output data
    printf("My name is %s %s, ", name, surname);
    printf("you can call me %s.\n", nick_name);
    printf("Gender : %c , %c\n", gender, Gender);
    printf("Age : %d\n", age);
    printf("GPA : %.2f\n", gpa);
    printf("Status : %d\n", status);
    return 0;
}