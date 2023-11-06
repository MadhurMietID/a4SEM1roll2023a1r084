//Bubble Sort in C Using While Loop
#include <stdio.h>

int main() 
{
  int n = 5;
  int arr[5] = {20, 40, 10, 25, 44};
  int i = 0;
  while (i < n - 1) 
  { //Implementing Bubble Sort using while-loop
    int j = 0;
    while (j < n - i - 1) 
    {
      if (arr[j] > arr[j + 1]) 
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
      j++;
    }
    i++;
  }
  printf("Array after implementing Bubble sort: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
