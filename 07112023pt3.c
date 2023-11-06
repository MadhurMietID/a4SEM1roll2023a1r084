//Bubble Sort in C Using Functions
#include <stdio.h>

void Bubble_sort(int arr[], int n) 
{
  //Bubble sorting function to sort the array
  for (int i = 0; i < n - 1; i++) 
  {
    for (int j = 0; j < n - i - 1; j++) 
    {
      if (arr[j] > arr[j + 1]) 
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() 
{
  int n = 8;
  int arr[8] = {77, 55, 20, 23, 11, 3, 2, 1}; //array of size 8
  Bubble_sort(arr, n); //function called to sort the array
  printf("Array after implementing Bubble sort: ");
  for (int i = 0; i < n; i++) 
  {
    printf("%d  ", arr[i]);
  }
  return 0;
}
