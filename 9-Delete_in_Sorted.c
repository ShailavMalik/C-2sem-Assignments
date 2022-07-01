#include <stdio.h>
#include <stdlib.h>

void deleteElement(int *arr, int *n, int num)
{
    int pos = 0;
    for (int i = 0; i < *n; i++)
    {
        if (num == arr[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == 0)
        pos = *n;

    for (int i = pos; i < *n; i++)
    {
        arr[i - 1] = arr[i];
    }

    --*n;
}

int main()
{
    int arr[] = {1, 2, 5, 8, 9, 14};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int num;
    printf("\nEnter the number to be deleted: ");
    scanf("%d", &num);

    deleteElement(arr, &n, num);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}