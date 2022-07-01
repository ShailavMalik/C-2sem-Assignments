#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);

    char name[10][10];
    printf("Now enter the names: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &name[i]);
    }

    printf("\nprinting names: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}