/* user input or run time value version of multidimentional array that is 3 by 3 */
#include<stdio.h>
void main()
    {
        int a[3][3];
        int i,j;
        printf("Enter the array elements\n");
        for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("To print the array values\n");
        for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }