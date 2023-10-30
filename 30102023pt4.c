//Check whether a Number is a Armstrong Number
#include <stdio.h>
#include <math.h>
int main() 
{
    int num, originalNum, remainder, result = 0,n=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    //count the number of digits
    while (originalNum != 0) 
    {
       originalNum /= 10;
       ++n;
    }
    originalNum = num;
    //calculate the armstrong number

    //check if a number is armstrong or not
    while (originalNum != 0) 
    {
        remainder = originalNum % 10;
        result += pow(remainder,n);
        originalNum /= 10;
    }    
    if (result == num)
    {
        printf("%d is an Armstrong number.", num);
    }    
    else
    {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}