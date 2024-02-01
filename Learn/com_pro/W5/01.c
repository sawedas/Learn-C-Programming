#include <stdio.h>

int main() {
    int number[] = {1, 3, 5, 7};
    int n = sizeof(number)/sizeof(number[0]);

    printf("%d", n);
}