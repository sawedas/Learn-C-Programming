#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct __Students {
    char firstname[30];
    char lastname[30];
    char *id;
    double score;
};

typedef struct __Students Students;
typedef double metre; //เพิ่มความหมายให้กับ code มากขึ้น

void print_students(Students students);
void addScore(Students *, double);
Student *create(char first[], char last[], char id[], double score);

int main(){
    Students **students;
    students = (Student **) malloc (10 * sizeof(Student*));

    students[0] = create("Ada", "Wong", "6666600000", 115);

    //strcpy(students[0].firstname, "Leon");
    //strcpy(students[0].lastname, "Kennedy");
    //memcpy(students.lastname, "S. Kennedy", 11);
    //memmove(students.firstname, students.lastname, 11);
    //students.id = strdup("6610466666");
    //sprintf(students.lastname, "%s", "Kennedy");
    //students[0].id = (char*) malloc(11 * sizeof(char));
    //strcpy(students[0].id, "6666666666");
    //students[0].score = 110;

    for (int i = 0; i < 10; i++){
        students[i] = (Student *)malloc(sizeof(Student*));
        sprintf(students[i]->firstname, "First%02d", i);
        sprintf(students[i]->lastname, "Last%02d", i);
        students[i]->id = (char*)malloc(11 * sizeof(char));
        sprintf(students[i]->id, "66104%05d", i);
        students[i]->score = 0;
    }

    for (int i = 0; i < 10; i++){
        //print_student(*students);
    }
}

Student *create(char first[], char last[], char id[], double score){
    Student *result = (Student *)malloc(sizeof(Student));

    strcpy(result -> firstname, first);
}
void addScore(Students *sp, double score){
    if (score > 0){
        sp -> score += score;
    }
}

void print_students(Students students){
    printf("Name: %s %s (%s)\n", students.firstname, students.lastname, students.id);
    printf("Score: %.2lf\n", students.score);
}