#include <stdio.h>

int remove_vowel(char *text)
{
  int i, j;
    for (i = 0, j = 0; text[i] != '\0'; i++) {
        switch (text[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                continue;
            default:
                text[j] = text[i];
                j++;
        }
    }
    text[j] = '\0';
}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}