#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char str[100])
{
    char *out = (char *)malloc(sizeof(char) * 100);
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
            out[i] = toupper(str[i]);
        else
            out[i] = str[i];
    }
    out[i] = '\0';

    return out;
}

int main()
{
    char s[100];
    char *result;

    scanf("%s", s);
    result = stoupper(s);
    if (result == s)
        printf("ERROR.\n");
    printf("%s\n", result);
}