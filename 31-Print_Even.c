#include <stdio.h>

int main()
{
    int m, n, *ptr,firstEven;
    printf("Enter the starting and ending number: ");
    scanf("%d%d", &m, &n);
    ptr=&m;
    // find first even number and then keep adding 2 to it
    // until it is less than n
    if (*ptr & 1) // condition for odd
        firstEven = *ptr + 1;
    else
        firstEven = *ptr;

    printf("\nPrinting even numbers from %d to %d: \n", m, n);
    for (int i = firstEven; i <= n; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}