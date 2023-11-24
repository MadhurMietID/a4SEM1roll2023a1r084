//c program to calculate factorial using Recursion
#include<stdio.h>
int fact(int);
void main() 
{
    int a;
    printf("\n Enter a positive integer: ");
    scanf("%d",&a);
    printf("Factorial of %d = %d", a,fact(a));
}
int fact(int x) 
{
    if (x>=1)
        return x*fact(x-1);
    else
        return 1;
}
