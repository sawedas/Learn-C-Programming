#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add_complex(struct complex a, struct complex b)
{
    struct complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct complex multiply_complex(struct complex a, struct complex b)
{
    struct complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

void print_complex(char *str, struct complex num)
{
    if (num.imag == 0){
        printf("%s%.1f\n", str, num.real);
    }else if (num.real == 0){
        printf("%s%.1f\n", str, num.imag);
    }else {
        if (num.imag < 0){
            printf("%s%.1f - %.1fi\n", str, num.real, -1.0 * num.imag);
        }else {
            printf("%s%.1f + %.1fi\n", str, num.real, num.imag);
        }
    }
}

int main()
{
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.imag);
    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.imag);
  

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}