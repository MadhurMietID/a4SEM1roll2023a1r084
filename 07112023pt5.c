//Optimized Implementation of Bubble Sort in C
#include <stdio.h>
#include <stdbool.h>
int main() {
  int n = 5;
  int arr[5] = {44, 33, 11, 22, 55};

  for (int i = 0; i < n - 1; i++) {
    bool flag = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = true; //Elements swapped in this pass
      }
    }
    //if flag == false, no swapping is done in this pass
    if (flag == false) break; //Array is already sorted, hence break the loop
  }
  printf("Array after implementing Bubble sort in an optimized way: ");
  for (int i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
  return 0;
}
