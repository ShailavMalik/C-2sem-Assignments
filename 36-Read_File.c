#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr = fopen("36.txt", "r");
    if (fptr == NULL)
    {
        printf("File doesn't exist\n");
        return -1;
    }

    printf("Printing file 36.txt: \n\n\"");
    while (1)
    {
        char ch = fgetc(fptr);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fptr);
    printf("\"\n\n36.txt closed successfully");

    return 0;
}