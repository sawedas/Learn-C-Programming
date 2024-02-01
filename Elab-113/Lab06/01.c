#include <stdio.h>

void change24hour(int h, int m, char unit){
    if (unit == 'p' || unit == 'P'){
        if (h < 12){
            h += 12;
        }
    }else if (unit == 'a' || unit == 'A'){
        if (h == 12){
            h = 0;
        }
    }

    printf("Equivalent 24-hour time: %02d:%02d", h, m);
}

int main(){
    int hours,min;
    char pmam;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hours, &min, &pmam);

    change24hour(hours, min, pmam);
}