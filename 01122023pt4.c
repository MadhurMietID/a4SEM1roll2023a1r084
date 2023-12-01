#include <stdio.h>
int main()
{
    int n1, n2, i, j, k, flag = 0;
    printf("Enter the size of the first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("\nEnter the elements of the first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf(" %d ", &arr2[i]);
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("The duplicate element is %d ", arr1[i]);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("There are no duplicate elements in the two arrays. ");
    }
    return 0;
}