#include <stdio.h>
#include <stdlib.h>

void inputArray(int arr[], int size)
{
    printf("\nInputArray function callled:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    printf("\nPrintArray function callled:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    inputArray(arr, n);
    printArray(arr, n);

    return 0;
}