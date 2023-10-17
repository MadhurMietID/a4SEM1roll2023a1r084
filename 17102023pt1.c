//construct pascal traingle
#include <stdio.h>
void main()
{
    int no_row,coef=1,space,i,j;
    
    //input number of rows form the user 
    printf("Input number of rows: ");
    scanf("%d",&no_row);
    //loop through each progrmamms
    for(i=0;i<no_row;i++)
    {
        //print spaces before the  numbers 
        for(space=1;space<=no_row-i;space++)
        printf("  ");
        //print numbers in each row
        for(j=0;j<=i;j++)
        {
            //calculate and print coefficient
            if (j==0||i==0)
                coef=1;
            else
               coef=coef*(i-j+1)/j;
            printf("% 4d",coef);
            //Print the coefficient with padding
        }
        printf("\n");//Move to the next line for the next row
    }
}
