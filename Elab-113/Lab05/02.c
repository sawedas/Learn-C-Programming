//3 loop not pass
#include <stdio.h>

void find(int n) {
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b < n; b++) {
            int c = n - a - b;
            if (a * a + b * b == c * c) {
                printf("(%d, %d, %d)\n", a, b, c);
                return;
            }
        }
    }
    printf("No triple found.\n");
}

int main() {
    int number;
    scanf("%d", &number);

    find(number);
}
