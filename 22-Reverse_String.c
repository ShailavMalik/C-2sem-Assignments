#include <stdio.h>
#include <string.h>

int main()
{
    char string1[10];
    printf("Enter the string: ");
    scanf("%s", &string1);
    printf("string1: %s\n", string1);

    strrev(string1);
    printf("\nAter reversing string,\nstring1: %s", string1);

    return 0;
}