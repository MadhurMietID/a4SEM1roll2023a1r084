/*To print the matrix and its inverse*/
#include<stdio.h>
void main()
    {
        int a[3][3];
        int i,j;
        for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("Enter the value of  Matrix element:a[%d][%d]",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("To print the Matrix\n");
        for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("To print the Inverse Matrix\n");
        for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d\t",a[j][i]);
            }
            printf("\n");
        }
    }