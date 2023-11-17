#include<stdio.h>
void main()
{
    int a[3][3],i,j,sR=0,sC=0;
    for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("Enter the value of element:a[%d][%d]",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("The array is:\n");
        for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }    
        //to calculate sum of row and column
        for(i=0;i<3;i++)
        {
            sR=sC=0;
            for ( j = 0; j < 3; j++)
            {
                sR=sR+a[1][j];
                sC=sC+a[j][i];
            }
            printf("\n%d:sR=%d and%d:sC=%d",i,sR,i,sC);
        }           
            for(i=0;i<3;i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d",a[i][j]);
            }
        }        
}