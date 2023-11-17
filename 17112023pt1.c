/*A multi-dimensional array can be termed as an array of arrays that stores homogeneous data in tabular form. 
Data in multidimensional arrays is generally stored in row-major order in the memory.
syntax
data_type array_name[size1][size2]....[sizeN];
*/
/*initialise a 2 d array*/
#include<stdio.h>
void main()
    {
        int a[3][2]={{1,2},{3,4},{5,6}};
        int i,j;
        for(i=0;i<3;i++)
        {
            for ( j = 0; j < 2; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }