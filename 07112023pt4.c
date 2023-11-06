//Bubble Sort in C Using Pointers
#include <stdio.h>

void Bubble_sort(int *arr, int n) 
{ //array passed as pointer
  for (int i = 0; i < n - 1; i++) 
  {
    for (int j = 0; j < n - i - 1; j++) 
    {
      if ( *(arr + j) > *(arr + j + 1)) 
      {
        //swapping of array elements using pointers
        int temp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
      }
    }
  }
  printf("Array after implementing Bubble sort: ");
  for (int i = 0; i < n; i++) {
    printf("%d  ", *(arr + i));
  }
}

int main() 
{
  int n = 5;
  int arr[5] = {100, 400, 200, 500, 300};
  Bubble_sort(arr, n);
  return 0;
}
