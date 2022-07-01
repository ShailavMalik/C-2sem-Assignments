// program to delete last char of a string
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50];
    printf("Enter the string: ");
    gets(string1);
    int prevChar = -1;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        prevChar++;
    }

    string1[prevChar] = '\0';
    printf("\nstring1 after deleting last character: \n");
    puts(string1);

    return 0;
}