// Program to copy 36.txt to new.txt
#include <stdio.h>

int main()
{
    printf("Opening file 36.txt in read mode \n");
    FILE *fptr1 = fopen("36.txt", "r");
    if (fptr1 == NULL)
    {
        printf("File doesn't exist\n");
        return -1;
    }
    printf("Opening file new.txt in write mode \n");
    FILE *fptr2 = fopen("new.txt", "w");

    printf("\nCopying 36.txt to new.txt: \n\n");
    while (1)
    {
        char ch = fgetc(fptr1);
        if (feof(fptr1))
            break;
        fputc(ch, fptr2);
    }

    fclose(fptr1);
    printf("file 36.txt closed successfully\n");
    fclose(fptr2);
    fclose(fptr2);
    printf("file new.txt closed successfully\n");

    return 0;
}