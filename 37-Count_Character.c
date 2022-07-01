#include <stdio.h>

int main()
{
    FILE *fptr = fopen("36.txt", "r");
    if (fptr == NULL)
    {
        printf("File doesn't exist\n");
        return -1;
    }
    int characters = 0;
    int lines = 1;

printf("Reading file 36.txt:\n\n");
    while (1)
    {
        char ch = fgetc(fptr);
        if (feof(fptr))
            break;

        characters++;
        if (ch == '\n')
            lines++;
    }

    printf("No. of characters: %d\n", characters);
    printf("No. of lines: %d\n", lines);

    return 0;
}