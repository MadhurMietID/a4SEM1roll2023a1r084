//for sum of 2 numbers without return type and without arguments
#include<stdio.h>
void main()
{
    int add();
    add();
}
int add()
{
    int x ,y;
    printf("Enter two numbers to sum \n");
    scanf("%d%d",&x,&y);
    int z=x+y;
    printf("Sum=%d",z);
}