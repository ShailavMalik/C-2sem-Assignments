// program to find length of a string
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[5];
    printf("Enter the string: ");
    gets(string1);
    printf("\nstring1: %s\n", string1);
    printf("\nLength of string string1: %d\n", strlen(string1));

    return 0;
}