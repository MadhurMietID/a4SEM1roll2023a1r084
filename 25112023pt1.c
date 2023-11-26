//title of program
//Program to print the Fibonacci Sequence using recursion
#include<stdio.h>
//function heading
//function(variable) declaration
int fib(int n)
{
if(n<=1)
return n;
else
return fib(n-1)+fib(n-2);
}
//function(variable) declaration
void fib1(int n,int i){
if(i<n){
//output statement 
printf("%d",fib(i));
fib1(n,i+1);
}
}
int main(){
//variable declaration
int n;
//output statement 
printf("enter the number of terms:");
//input statement 
scanf("%d",&n);
//output statement 
printf("fibonacci sequence:\n");
fib1(n,0);
}
