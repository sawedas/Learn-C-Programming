#include <stdio.h>
int a; //a in global variable and start have data
int main()
{
    int a = 20; //this a is a local variable (4 byte)
    long b = 1000; //4 byte
    long long c = 1000;
    unsigned long long d = 10000; //bigest in c
    char g = 'a'; //97

    float e = 0.1;
    double f = 0.1234;

    char name[6] = "Tachit";

    printf("Hello World!\n");
    printf("%s\n", name);

    g += 10;
    printf("%d\n", g);
    printf("%llu\n", d);
    printf("%ld\n", b);
    printf("%lld\n", c);
    return 0;
}