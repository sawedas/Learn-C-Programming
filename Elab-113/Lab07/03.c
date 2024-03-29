#include <stdio.h>

void stringcat(char src[], char dest[])
{
    char *s2 = dest;
    int i = 1, len = 0;
    for (i = 0; dest[i] != '\0'; i++){
      len++;
    }

    for (i = 0; src[i] != '\0'; i++) {
        s2[len + i] = src[i];
    }
    
    s2[len + i] = '\0';
}

int main()
{
  char in1[100],in2[100];

  printf("Input 1: ");
  gets(in1);  /* read a line of characters from the input to "in1" variable */
  printf("Input 2: ");
  gets(in2);  /* read another line of characters from the input to "in2" variable */
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;
}