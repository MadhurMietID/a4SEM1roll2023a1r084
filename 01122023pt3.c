#include <stdio.h>
int main()
{
    int n, i, j, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("The duplicate element is %d ", arr[i]);
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("There are no duplicate elements in the array. ");
    }
    return 0;
}