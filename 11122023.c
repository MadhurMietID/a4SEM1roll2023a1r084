//title of program
//Program to differentiate pass by value and pass by reference by swapping two numbers using function
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a=10,b=20;
//using function without return type with argument 
void swap(int,int);
void swap1(int*,int*);
//output statements 
printf("before swapping");
printf("A=%d\t B=%d\n",a,b);
swap(a,b);
//output statements
printf("after swapping");
printf("A=%d\t B=%d\n",a,b);
swap1(&a,&b);
//output statements
printf("after swapping");
printf("A=%d\t B=%d\n",a,b);
}
void swap(int x,int y)
{
int t=x;
x=y;
y=t;
}
void swap1(int *x,int *y)
{
int t=*x;
*x=*y;
*y=t;
}