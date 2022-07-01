// self implemented
#include <stdio.h>

int main()
{
    char string1[100];
    printf("Enter the string: ");
    scanf("%s", &string1);
    printf("\nstring1: %s\n", string1);

    for (int i = 0; string1[i] != '\0'; i++)
    {
        if (string1[i] >= 'a' && string1[i] <= 'z')
            string1[i] -= 'a' - 'A';
    }
    printf("\nConverting to upper case: %s", string1);

    return 0;
}
