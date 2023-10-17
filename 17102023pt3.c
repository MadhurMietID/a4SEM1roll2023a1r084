//sum of  first n natural numbers using a loop
#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Program is for sum of n natural numbers .Enter a positive integer n.: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}

