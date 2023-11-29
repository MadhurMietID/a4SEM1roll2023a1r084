//c program for sum of cubes of first n natural numbers using reccusion
#include<stdio.h>
void main()
{
    int num,fact1;
    printf("Enter the number");                      
    scanf("%d",&num);
    fact1=fact(num);
    printf("sum=%d",fact1);
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return (n*n)+fact(n-1);
}