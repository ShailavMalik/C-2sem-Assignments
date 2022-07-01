#include <stdio.h>

struct comparison
{
    int a;
    int b;
    int c;
};

int main()
{
    struct comparison comp;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &comp.a, &comp.b, &comp.c);

    printf("\nprinting biggest of three no. using structure:\n");
    if (comp.a >= comp.b && comp.a >= comp.c)
        printf("%d is biggest", comp.a);
    else if (comp.b > comp.c)
        printf("%d is biggest", comp.b);
    else
        printf("%d is biggest", comp.c);

    return 0;
}