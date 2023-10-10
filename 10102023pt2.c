// C Program of Simple Calculator Using If Else
#include<stdio.h>
void main()
{
    int a, b,c;
    int op;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the operation to be performed on the two numbers");
    printf("\nFor addition 1 ");
    printf("\nFor subtraction 2 ");
    printf("\nFor multiplication 3 ");
    printf("\nFor division 4 : ");
    scanf("%d",&op);
    if(op==1) 
    {
        c=a+b;
        printf("The summation= %d",c);
    }
    else if(op==2) 
    {
        c=a-b;
        printf("The subtraction= %d",c);
    }
    else if(op==3) 
    {
        c=a*b;
        printf("The multiplication= %d",c);
    }
    else if(op==4) 
    {
        if(b==0)
        {
            printf("Infinity");
        }
        else
        {
        c=a/b;
        printf("The division= %d",c);
        }
    }
    else
    {
        printf("Invalid Input");
    }
}