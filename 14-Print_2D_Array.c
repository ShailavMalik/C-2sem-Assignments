#include <stdio.h>

int main()
{
    int arr[][4] = {{1, 2, 3, 4},
                    {5, 9, 4, 4},
                    {0, -1, 6, 4}};

    int col = sizeof(arr[1]) / sizeof(int);
    int row = sizeof(arr) / (sizeof(int) * col);
    printf("\nPrinting 2-D Array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}