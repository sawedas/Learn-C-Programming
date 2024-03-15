#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *file;

    file = fopen("input.txt", "r");

    char line[1000];

    printf("%d\n", atoi(line));

    int n = atoi(line);
    int total = 0;

    while (fgets(line, 1000, file) != NULL){
        int data = atoi(line);
        total += data;
    }

    printf("Total: %d\n", total);
    printf("Average: %.2lf\n", (double)total / n);

    fclose(file);
    return 0;
}