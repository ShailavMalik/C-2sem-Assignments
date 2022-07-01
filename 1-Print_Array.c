#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    // input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
getch();
    return 0;
}