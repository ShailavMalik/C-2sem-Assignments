#include <stdio.h>

void swapLargestSmallest(int *arr, int n)
{
    printf("\nSwapLargestSmallest function called:\n");
    // find smallest
    int smallest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[smallest])
            smallest = i;
    }

    // find largest
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
            largest = i;
    }
    // swap smallest and largest element
    int temp = arr[smallest];
    arr[smallest] = arr[largest];
    arr[largest] = temp;
}

int main()
{
    int arr[] = {9, 4, 8, -10, 1, 21};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    swapLargestSmallest(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}