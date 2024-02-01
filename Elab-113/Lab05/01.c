#include <stdio.h>
#include <math.h>

int isAutomorphic(long long num) {
    long long square = num * num;
    long long temp = num;
    int count = 0;

    while (temp > 0) {
        temp /= 10;
        count++;
    }

    long long lastDigits = square % (long long)pow(10, count);

    if (lastDigits == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    long long num;

    printf("Input n = ");
    scanf("%lld", &num);

    printf("n^2 = %lld\n", num * num);

    if (isAutomorphic(num)) {
        printf("Yes. %lld is automorphic number.\n", num);
    } else {
        printf("No. %lld is not automorphic number.\n", num);
    }

    return 0;
}
