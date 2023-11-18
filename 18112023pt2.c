// c program to sum two matrixes
#include <stdio.h>
void main() 
{
  int mat1[10][10],mat2[10][10],mat3[10][10],i,j,size=3,sr=0,sc=0;
  for (i = 0; i < size; ++i)
  {
    for (j = 0; j < size; ++j) 
    {
      printf("Enter element mat1[%d][%d]",i,j);
      scanf("%d", &mat1[i][j]);
    }
  }
  printf("\nThe inputed matrix1 is:\n");
  for(i=0;i<size;i++)
        {
            for ( j = 0; j < size; j++)
            {
                printf("%d\t",mat1[i][j]);
            }
            printf("\n");
        }
  for (i = 0; i < size;i++)
  {
    for (j = 0; j < size;j++) 
    {
      printf("Enter element mat2[%d][%d]",i,j);
      scanf("%d", &mat1[i][j]);
    }
  }
  printf("\nThe inputed matrix2 is:\n");
  for(i=0;i<size;i++)
        {
            for ( j = 0; j < size; j++)
            {
                printf("%d\t",mat2[i][j]);
            }
            printf("\n");
        }         
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size;j++) 
    {
      mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
  }
  printf("\nThe sum of matrix 1 & 2 is:\n");  
  for (i = 0; i < size;i++)
  {
    for (j = 0; j < size;j++) 
    {
      printf("%d\t", mat3[i][j]);
    }
    printf("\n");
  }
}
