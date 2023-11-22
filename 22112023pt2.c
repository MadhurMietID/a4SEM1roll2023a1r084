//c program to create Simple calculator using switch case and function for every function
#include<stdio.h>
double add(double a,double b)
{
    return a+b;
}
double sub(double a,double b)
{
    return a-b;
}
double mul(double a,double b)
{
    return a*b;
}
int mod(int a,int b)
{
    return a%b;
}
double div(double a,double b)
{
if(b!=0)
{
    return a/b;
}
else
{
    printf("Error:Cannot divide by zero \n");
    return 0;    
}
}
int main()
{
    char operator;
    double num1,num2,result;
    printf("Enter an operator(+,-,*,/,%%)");
    scanf("%c",&operator);
    printf("\n enter the number 1:");
    scanf("%lf",&num1);
    printf("\n enter the number 2:");
    scanf("%lf",&num2);
    switch(operator)
    {
        case'+':
        result=add(num1,num2);
        break;
        case'-':
        result=sub(num1,num2);
        break;
        case'*':
        result=mul(num1,num2);
        break;
        case'%':
        result=mod((int)num1,(int)num2);
        break;
        case'/':
        result=div(num1,num2);
        break;
        default:
        printf("Error:Invalid input operator\n");
        return 1;
    }
    printf("result:%lf\n",result);
}