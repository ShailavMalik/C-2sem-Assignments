#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20] = "Ram";
    printf("string1: %s\n", string1);
    char string2[20] = "aman";
    printf("string2: %s\n", string2);

    strncat(string1, string2, 1);
    printf("\nAfter appending first character of second string to first string,\nstring1: ");

    puts(string1);

    return 0;
}