//program to calculate sum of digits of a number using a while loop
#include<stdio.h>
int main()
{
    int number , sum = 0 , digit;
    //input form the user
    printf("Enter a number:");
    scanf("%d",&number);
    //calculate the sum of digits using a while loop
    while (number != 0)
    {
        digit = number % 10;
        //Get the last digit
        sum += digit;
        //add the digit to the sum
        number /= 10;
        //Remove the last digit fom the number
    }
    //Output he sum of digit
    printf("Sum of digit: %d\n",sum);
    return 0;
}