// basic program to reverse an array
#include <stdio.h>
int main() 
{
    int arr[5] = {1, 2, 3, 4, 5}; // initialize the array
    int temp, i, j;
    printf("Original array: ");
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    
    }

    for (i = 0, j = 4; i < j; i++, j--) 
    { // loop to swap elements
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Reversed array: ");
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}