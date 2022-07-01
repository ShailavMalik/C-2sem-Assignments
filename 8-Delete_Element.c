#include <stdio.h>
#include <stdlib.h>

void deleteElement(int *arr, int *n, int pos)
{
    for (int i = pos; i < *n; i++)
    {
        arr[i - 1] = arr[i];
    }

    --*n;
}

int main()
{
    int arr[] = {2, 8, 9, 1, 5, 14};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int pos;
    printf("\nEnter position of element to be deleted: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n)
    {
        printf("Enter valid position!!");
        exit(1);
    }
    deleteElement(arr, &n, pos);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}