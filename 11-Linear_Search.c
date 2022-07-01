// program to search an element in an array
#include <stdio.h>

int searchTarget(int *arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i + 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 9, 1, 13, 5};
    int n = sizeof(arr) / sizeof(int);
    int target;
    printf("Enter the target to be searched: ");
    scanf("%d", &target);
    int targetIndex = searchTarget(arr, n, target);

    if (targetIndex == -1)
        printf("Element doesn't exist");
    else
        printf("%d is at %dth position", target, targetIndex);

    return 0;
}