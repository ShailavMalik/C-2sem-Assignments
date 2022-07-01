// self implemented
#include <stdio.h>

int isSame(char s1[], char s2[])
{
    int i = 0, j = 0;
    for (; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
    {
        if (s1[i] != s2[j])
            return -1; // not same
    }
    if (s1[i] != '\0' || s2[j] != '\0')
        return -2; // not same

    return 0; // both are same
}

int main()
{

    char string1[20] = "Shailav";
    printf("string1: %s\n", string1);
    char string2[20] = "Shailav";
    printf("string2: %s\n", string2);

    int c = isSame(string1, string2);

    if (!c)
        printf("Both strings are same");
    else
        printf("string1 & string2 are different");

    return 0;
}