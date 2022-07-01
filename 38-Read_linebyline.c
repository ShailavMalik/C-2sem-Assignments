#include <stdio.h>

int main(int argc, char *file[])
{
    FILE *ptr = fopen(file[1], "r");
    if (ptr == NULL)
    {
        printf("Error in opening file");
        return -1;
    }
    int line = 0;
    while (1)
    {
        if (feof(ptr))
            break;
        char s[100];
        fgets(s, 100, ptr);
        line++;
        printf("%d) ", line);
        puts(s);
    }

    return 0;
}