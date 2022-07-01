#include <stdio.h>

int main()
{
    int num, *ptr;
    printf("Enter the number: ");
    scanf("%d", &num);
    ptr = &num;

    if (*ptr > 0)
        printf("positive", num);
    else if (*ptr < 0)
        printf("negative", num);
    else
        printf("zero", num);

    return 0;
}