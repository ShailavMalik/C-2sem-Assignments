#include <stdio.h>

void deleteFirstChar(char *string1)
{
    int i;
    for (i = 0; string1[i + 1] != '\0'; i++)
    {
        string1[i] = string1[i + 1];
    }
    string1[i] = '\0';
}

int main()
{
    char string1[50];
    printf("Enter the string: ");
    gets(string1);

    deleteFirstChar(string1);
    printf("\nstring1 after deleting first character:\n%s", string1);

    return 0;
}