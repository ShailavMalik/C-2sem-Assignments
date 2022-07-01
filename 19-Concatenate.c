#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20] = "Shailav ";
    printf("string1: %s\n", string1);
    char string2[20] = "Malik";
    printf("string2: %s\n", string2);

    strcat(string1, string2);
    printf("\nAfter concatenation,\nstring1: %s", string1);

    return 0;
}