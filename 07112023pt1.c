/*Pseudo-code for Bubble Sort in C
procedure start:
bubble_sort(arr)
   size = arr.length
   
   for i=0 to size-1:(for i = 1 to i = size)
      for j=0 to size-i-1: (for j = 1 to j = size)
         if arr[j] > arr[j+1] then:  //checking adjacent elements 
            swap(arr[j], arr[j+1])  //swap if left_elem > right_elem	 
return arr
procedure end*/
//Bubble Sort in C Using For Loop
#include <stdio.h>

int main() {
  int n = 5;
  int arr[5] = {44, 33, 11, 22, 55}; 
  //array of size 5

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        //checking and swapping adjacent elements when left_elem > right_elem
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("Array after implementing Bubble sort: ");
  for (int i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
  return 0;
}
