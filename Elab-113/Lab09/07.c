#include <stdio.h>

double findAverage(char *filename)
{
    FILE *AllScore;
    double sum = 0, score, count = 0;
    AllScore = fopen(filename, "r");
    if (AllScore != NULL){
        while (!feof(AllScore)){
            fscanf(AllScore, "%lf\n", &score);
            sum += score;
            count++;
        }
        fclose(AllScore);
    }
    return sum/count;

}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}