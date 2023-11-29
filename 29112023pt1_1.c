#include<stdio.h>
#include"29112023pt1_2.c"
void main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=sub(a,b);
    printf("Sum=%d",c);
}