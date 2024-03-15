#include <stdio.h>

struct vector {
    float x, y, z;
};

int main()
{
    struct vector u, v;
    printf("Enter u: ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);
    printf("Enter v: ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);
    float result_1 = 0, result_2 = 0, result_3 = 0;
    result_1 = (u.y * v.z) - (u.z * v.y);
    result_2 = (u.z * v.x) - (u.x * v.z);
    result_3 = (u.x * v.y) - (u.y * v.x);
    printf("u x v = %.1f %.1f %.1f", result_1, result_2, result_3);
    return 0;
}