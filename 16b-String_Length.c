// program to find length of a string (Self implemented)
#include <stdio.h>

int main()
{
    char string1[5];
    printf("Enter the string: ");
    scanf("%s", &string1);
    printf("\nstring1: %s\n", string1);

    int len = 1;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        len++;
    }

    printf("%d", len);

    return 0;
}