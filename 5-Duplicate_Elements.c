#include <stdio.h>
#include <stdbool.h>

bool hasduplicateElements(int arr[], int size) //...O(n^2)
{
   for (int i = 0; i < size; i++)
   {
      for (int j = i + 1; j < size; j++)
      {
         if (arr[i] == arr[j])
            return true;
      }
   }
   return false;
}

int main()
{
   int arr[] = {2, 3, 1, 9, 4, 1};
   int n = sizeof(arr) / sizeof(int);

   if (hasduplicateElements(arr, n))
      printf("Array has duplicate Elements");
   else
      printf("Array doesn't have duplicate Elements");

   return 0;
}