// program to print hello world using pointers
#include <stdio.h>

int main()
{
    char st[] = "Hello World";
    char *ptr = &st[0];

    printf("\nPrinting the string using pointers: \n") ;
    for (int i = 0; st[i] != '\0'; i++)
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}