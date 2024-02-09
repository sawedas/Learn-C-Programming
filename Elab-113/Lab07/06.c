#include <stdio.h>

int charcount(char *s)
{
   int count = 0;
   for (int i = 0; s[i] != '\0'; i++){
      count++;
   }

   return count;
}

void charweave(char *s,char *result)
{
   int amount = charcount(s), i = 0, j = 0;

   for (i = 0, j = 0; i < amount; i++, j++){
      result[j] = s[i];
      result[++j] = s[amount - i - 1];
   }
   result[j] = '\0';
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}