#include <stdio.h>

int nCr(int n, int r)
{
    if (r > n)
        return -1;
    if (r > n - r)
        r = n - r;
    int numr = 1;
    int denm = 1;
    for (int i = 1; i <= r; i++)
    {
        numr *= n;
        n--;

        denm *= i;
    }
    return (numr / denm);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i; s++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%d ",nCr(i,j));
        }
        printf("\n");
    }

    return 0;
}