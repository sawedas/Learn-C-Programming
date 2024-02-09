#include <stdio.h>

void roman2arabic(char input[],char output[])
{
   int i = 0, j = 0;
   
   for (i = 0, j = 0; input[i] != '\0'; i++, j++){
      switch (input[j]){
         case 'I':
            if (input[j +  1] == 'I'){
               if (input[j + 2] == 'I'){
                  output[i] = '3';
                  j += 2;
                  break;
               }
               output[i] = '2';
               j += 1;
               break;
            }else if (input[j + 1] == 'X'){
               output[i] = '9';
               j += 1;
               break;
            }else if (input[j + 1] == 'V'){
               output[i] = '4';
               j += 1;
               break;
            }
            output[i] = '1';
            break;
         case 'V':
            if (input[j + 1] == 'I'){
               if (input[j + 2] == 'I'){
                  if (input[j + 3] == 'I'){
                     output[i] = '8';
                     j += 3;
                     break;
                  }
                  output[i] = '7';
                  j += 2;
                  break;
               }
               output[i] = '6';
               j += 1;
               break;
            }
            output[i] = '5';
            break;
         default:
            output[i] = input[j];
      }
   }
   output[i] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}

/*
Test case
There are IX eggs on the table.
There are VIII eggs on the table.
There are VII eggs on the table.
There are VI eggs on the table.
There are V eggs on the table.
There are IV eggs on the table.
There are III eggs on the table.
There are II eggs on the table.
There are I eggs on the table.
*/