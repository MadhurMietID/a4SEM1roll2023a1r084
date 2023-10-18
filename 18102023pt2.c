//c program to print sum of cubes of first n natural numbers using a for loop
#include <stdio.h>
int main() 
{
   int n,sum = 0,i;
   printf("Program is for sum of cubes of first n natural numbers .Enter a positive integer n.: ");
   scanf("%d", &n);
   for (i = 1; i <= n; ++i)
    {
      sum += (i * i * i);
    }
    printf("The sum is:- %d" , sum);    
}