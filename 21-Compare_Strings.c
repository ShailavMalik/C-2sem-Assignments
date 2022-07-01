#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20] = "Shailav";
    printf("string1: %s\n", string1);
    char string2[20] = "Shailove";
    printf("string2: %s\n", string2);

    int c=strcmp(string1,string2);

    if (!c)
        printf("\nBoth strings are same");
    else
        printf("\nstring1 & string2 are different");

    return 0;
}