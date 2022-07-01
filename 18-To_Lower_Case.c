#include <stdio.h>
#include <string.h>

int main()
{
   char string1[100];
   printf("Enter the string: ");
   gets(string1);
   printf("\nstring1: %s\n", string1);
   
   strlwr(string1);
   printf("\nconverting string1 to lowercase: \n");
   puts(string1);

   return 0;
}