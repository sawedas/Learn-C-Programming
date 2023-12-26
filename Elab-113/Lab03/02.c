#include <stdio.h>
#include <stdlib.h>

long long gcd(long long x, long long y)
{
    int i;
    while (y != 0)
    {
        i = y;
        y = x % y;
        x = i;
    }
    return x;
}

long long lcm(long long x, long long y, long long gcd_in)
{
    return (x * y) / gcd_in;
}

int main()
{
    char m_str[12], n_str[12];

    fgets(m_str, 12, stdin);
    fgets(n_str, 12, stdin);

    long long m = atoll(m_str);
    long long n = atoll(n_str);

    long long gcd_org = gcd(m, n);

    printf("GCD: %lld\nLCM: %lld", gcd_org, lcm(m, n, gcd_org));
}