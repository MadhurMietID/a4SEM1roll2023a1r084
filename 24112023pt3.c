//Question of c -enter an number carry out modular division by 2,3,4 and display the remainder
#include<stdio.h>
void main()
{
    int a=2,b=3,c=4,d,num=0;
    printf("enter the number\n");
    scanf("%d",&num);
    d=num%a;
    printf("%d\n",d);
    d=num%b;
    printf("%d\n",d);
    d=num%c;
    printf("%d\n",d);
}