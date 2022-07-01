// Program to insert a number in a sorted array
#include <stdio.h>
#include <stdlib.h>

void insertNumSorted(int *arr, int *size, int num)
{
   int pos = 0;
   for (int i = 0; i < *size; i++)
   {
      if (num < arr[i])
      {
         pos = i + 1;
         break;
      }
   }
   if (pos == 0)
      pos = *size + 1;

   for (int i = *size - 1; i >= pos - 1; i--)
   {
      arr[i + 1] = arr[i];
   }

   arr[pos - 1] = num;
   ++*size;
}

int main()
{
   int n = 6;
   int *arr = (int *)malloc(n * sizeof(int));
   arr[0] = 2;
   arr[1] = 9;
   arr[2] = 11;
   arr[3] = 15;
   arr[4] = 18;
   arr[5] = 20;
   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }

   int num;
   printf("\nEnter the value to be inserted: ");
   scanf("%d", &num);
   insertNumSorted(arr, &n, num);
   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }

   free(arr);
   
   return 0;
}