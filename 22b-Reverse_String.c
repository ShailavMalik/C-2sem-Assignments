// Self implemented
#include <stdio.h>

void swap(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

int main()
{
    char string1[10];
    printf("Enter the string: ");
    scanf("%s", &string1);
    printf("string1: %s\n", string1);

    int len = 0;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < (len / 2); i++)
    {
        swap(&string1[i], &string1[len - i - 1]);
    }
    printf("\nAfter reversing,\nstring1: %s\n", string1);

    return 0;
}