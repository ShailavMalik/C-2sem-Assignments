#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= i - 1; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}