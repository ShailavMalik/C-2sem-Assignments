#include <stdio.h>

int smallestElement(int arr[], int size)
{
    int smallest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[smallest])
            smallest = i;
    }
    return arr[smallest];
}

int main()
{
    int arr[] = {2, 5, -5, 15, 0};
    int n = sizeof(arr) / sizeof(int);

    printf("Smallest Element: %d", smallestElement(arr, n));

    return 0;
}