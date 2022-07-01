#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    
    if (*p1 >= *p2 && *p1 >= *p3)
        printf("%d is biggest", *p1);
    else if (*p2 > *p3)
        printf("%d is biggest", *p2);
    else
        printf("%d is biggest", *p3);

    return 0;
}