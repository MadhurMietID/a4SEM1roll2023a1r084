//to print natural numbers with use of Recursion till limit
#include<stdio.h>
void display(int);
void main()
{
    int limit;
    printf("\n enter the limit to print the natural number:");
    scanf("%d",&limit);
    display(limit);
}
void display(int x)
{
    if(x)
    display(x-1);
    else
    return;
    printf("\n%d\n",x);
}
