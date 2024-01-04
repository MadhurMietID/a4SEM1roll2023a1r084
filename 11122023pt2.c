// 11-Program to demonstrate the use of malloc(),calloc(),realloc() and free() functions
// title of program
// Program to demonstrate the use of malloc(),calloc(),realloc() and free() functions
#include <stdio.h>
// function heading
#include <stdlib.h>
// header file for use of functions
int main()
{
    // variable declaration
    int n, i;
    // output statement
    printf("enter the size of an array");
    // input statement
    scanf("%d", &n);
    // use of malloc() and calloc() functions
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)calloc(n, sizeof(int));
    if (arr1 == NULL || arr2 == NULL)
    {
        // output statement
        printf("Memory Error!\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            *(arr1 + i) = i;
            // output statement
            printf("%d", *(arr1 + i));
        }
        // output statement
        printf("\n");
        for (i = 0; i < n; i++)
        {
            *(arr2 + i) = n - i;
            // output statement
            printf("%d", *(arr2 + i));
        }
        // output statement
        printf("\n");
        // use of realloc() function
        int *arr3 = (int *)realloc(arr1, n * sizeof(int));
        int *arr4 = (int *)realloc(arr2, sizeof(int));
        if (arr3 == NULL || arr4 == NULL)
        {
            // output statement
            printf("Reallocation failed!\n");
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                // output statement
                printf("%d", *(arr3 + i));
            }
            // output statement
            printf("\n");
            for (i = 0; i < n; i++)
            {
                // output statement
                printf("%d", *(arr4 + i));
            }
        }
    }
    // use of free() function
    free(arr1);
    free(arr2);
    return 0;
}