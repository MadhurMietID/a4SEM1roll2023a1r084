//Check whether a Number is a Armstrong Number using for loop
//this is not complete
#include <stdio.h>
#include <math.h>
int main() 
{
    int start , end , number , originalNum, remainder, result,n;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &start);
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