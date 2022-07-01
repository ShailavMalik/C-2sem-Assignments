#include <stdio.h>
#include <string.h>

int noOfWords(char string[])
{
    int words = 1;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
            words++;
    }

    return words;
}

int main()
{
    char string1[50];
    printf("Enter the string: ");
    gets(string1);

    printf("No of words: %d", noOfWords(string1));

    return 0;
}