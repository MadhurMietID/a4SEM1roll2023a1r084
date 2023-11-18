// c program to sum 
#include <stdio.h>
void main() 
{
  int mat[10][10],i,j,size=3,sr=0,sc=0;
  for (i = 0; i < size; ++i)
  {
    for (j = 0; j < size; ++j) 
    {
      printf("Enter element mat[%d][%d]",i,j);
      scanf("%d", &mat[i][j]);
    }
  }
  printf("\nThe inputed matrix is:\n");
  for(i=0;i<size;i++)
        {
            for ( j = 0; j < size; j++)
            {
                printf("%d\t",mat[i][j]);
            }
            printf("\n");
        } 
  for (i = 0; i < size; ++i)
  {
    sr=sc=0;
    for (j = 0; j < size; ++j) 
    {
      sr=sc+mat[i][j];
      sc=sc+mat[i][j];
    }
    printf("\n%d:sr=%d and %d sc=%d",i,sr,j,sc);
  }
  for (i = 0; i < size; ++i)
    for (j = 0; j < size; ++j) 
    {
      printf("\n%d", mat[i][j]);
    }
}
