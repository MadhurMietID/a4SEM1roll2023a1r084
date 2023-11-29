//c program to take elements of an array from user and sort it in both ascending and decending order
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the size of the array: ");
    scanf(" %d ", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf(" %d ", &arr[i]);
    }

    // sorting the array in ascending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printing the sorted array in ascending order
    printf("The sorted array in ascending order is\n: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    // sorting the array in descending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printing the sorted array in descending order
    printf("The sorted array in descending order is: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}