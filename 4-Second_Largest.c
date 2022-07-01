#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int size)
{
    // find largest
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[largest])
            largest = i;
    }

    // now find second largest by neglecting 'largest' index of array
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // skip largest element
        if (i == largest)
            continue;

        if (arr[i] > arr[secondLargest])
            secondLargest = i;
    }
    return arr[secondLargest];
}

int main()
{
    int arr[] = {3, 1, 19, 2, 15};
    int n = sizeof(arr) / sizeof(int);

    printf("Second Largest: %d", secondLargest(arr, n));

    return 0;
}