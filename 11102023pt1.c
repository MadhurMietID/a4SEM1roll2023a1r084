#include<stdio.h>
void main()
{
    int sum=10,n=2;
    switch(n)
    {case 1:
    sum = sum+9;
    case 2:
    sum = sum+8;
    case 5:
    sum = sum+7;
    case 9:
    sum = sum+6;
    default:
    sum = sum-5;
    }
    printf("sum = %d",sum);
}