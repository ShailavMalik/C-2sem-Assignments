// Program to merge two sorted arrays
#include <stdio.h>

void mergeArrays(int *arr1, int n, int *arr2, int m, int *arr3)
{
    int i = 0, j = 0;
    int index = 0;
    while (i != n && j != m)
    {
        if (arr1[i] <= arr2[j])
            arr3[index++] = arr1[i++];
        else
            arr3[index++] = arr2[j++];
    }

    // copy remaining elements to arr3 as it is
    while (i != n)
    {
        arr3[index++] = arr1[i++];
    }

    while(j!=m)
    {
        arr3[index++]=arr2[j++];
    }
}

int main()
{
    int arr1[] = {1, 4, 7, 9, 11};
    int n = sizeof(arr1) / sizeof(int);
    printf("Array1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    int arr2[] = {7, 9, 13, 15, 19};
    int m = sizeof(arr2) / sizeof(int);
    printf("\nArray2: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    int arr3[10];
    printf("\n\nMerged Array: ");
    mergeArrays(arr1, n, arr2, m, arr3);
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}