#include <stdio.h>

int main()
{
    char string1[20] = "Shailav ";
    printf("string1: %s\n", string1);
    char string2[20] = "Malik";
    printf("string2: %s\n", string2);

    int len1 = 0;
    for (int i = 0; string1[i] != '\0'; i++)
    {
        len1++;
    }
    for (int i = len1, j = 0; string2[j] != '\0'; i++, j++)
    {
        string1[i] = string2[j];
    }
    
    printf("\nAfter concatenation,\nstring1: %s", string1);

    return 0;
}