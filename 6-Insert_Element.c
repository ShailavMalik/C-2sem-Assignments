#include <stdio.h>
#include <stdlib.h>

void insertElement(int arr[], int *n, int pos, int val) // 8
{
    for (int i = *n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = val;
    ++*n;
}

int main()
{
    int n = 7;
    int *arr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int pos;
    int val;
    printf("\nEnter position & number to be inserted: ");
    scanf("%d", &pos);
    scanf("%d", &val);
    if (pos < 1 || pos > n + 1)
    {
        printf("Enter valid position!!");
        exit(1);
    }
    insertElement(arr, &n, pos, val);
    printf("\nAfter Inserting element\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}