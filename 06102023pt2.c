//C program to print the square of a number if it is less than 10
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<10)
    {
        printf("%d is less than 10/n",n);
        printf("Square = %d",n*n);
    }
    return 0;
}