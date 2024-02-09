#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *stoupper(const char str[]) {
    char *out = malloc(100 * sizeof(char));
    int i = 0;
    while (str[i] != '\0') {
        out[i] = toupper(str[i]);
        i++;
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