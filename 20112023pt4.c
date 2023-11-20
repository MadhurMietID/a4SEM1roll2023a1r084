#include<stdio.h>
void main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
    printf("\n enter the first matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("\n enter element mat1[%d][%d],i,j");
        scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n enter the second matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("\n enter element mat2[%d][%d],i,j");
        scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n print the first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n print the second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n The matrix multiplication\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat3[i][j]=0;
            for(k=0;k<3;k++)
        {
             mat3[i][j]= mat3[i][j]+ mat1[i][j]* mat2[i][j];
        }
        }
        printf("\n");
    }
    printf("\nthe third matrix is\n");
    printf("print he matrix multiplication\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}    