//TO learn about basics of array c programing
// To demonstrate array initialization
#include <stdio.h>
 
int main()
{
 
    // array initialization using initialier list
    int arr[5] = { 10, 20, 30, 40, 50 };
 
    // array initialization using initializer list without specifying size
    int arr1[] = { 1, 2, 3, 4, 5 };
 
    // array initialization using for loop
    float arr2[5];
    for (int i = 0; i < 5; i++) 
    {
        arr2[i] = (float)i * 2.1;
    }
    // traversing array using for loop
    for (int i = 0; i < 5; i++) 
    {
        printf("%d", arr[i]);
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr1[i]);
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d", arr2[i]);
    }
     // modifying element at index 2
    arr[2] = 100;
    printf("Elements in Array: ");
    printf("The modified array is :-");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
}
