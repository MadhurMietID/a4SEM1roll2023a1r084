//C Program to Find Largest Element in an Array
#include <stdio.h>
int main()
{
    int size, i, largest; 
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int ary[size];  //Declaring array
    //Input array elements 
    printf("\n Enter %d elements of the array: \n", size); 
    for (i = 0; i < size; i++)
    {   
        scanf(" %d", &ary[i]);
    }
     //Declaring Largest element as the first element
    largest = ary[0];
    for (i = 1; i < size; i++) 
    {
        if (largest < ary[i])
        largest = ary[i];
    } 
    printf("Largest element present in the given array is :--->> %d", largest);
    return 0;
 }