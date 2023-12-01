//C program to find maximum element and its index in the array
#include <stdio.h>
int main()
{
    int n, i, max, max_index;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    max_index = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    printf("The maximum element in the array is %d and its index is %d. ", max, max_index);
    return 0;
}