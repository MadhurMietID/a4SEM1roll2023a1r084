//C Program to Find the Sum of Cube of Digits of a Number
#include<stdio.h>
int main()
{
    int number , sum = 0 , digit , cube;
    //input form the user
    printf("Enter a number:");
    scanf("%d",&number);
    //calculate the sum of digits using a while loop
    while (number != 0)
    {
        digit = number % 10;
        //Get the last digit
        cube = digit*digit*digit;
        sum += cube;
        //add the digit to the sum
        number /= 10;
        //Remove the last digit fom the number
    }
    //Output he sum of digit
    //printf("%d\n",(digit*digit*digit));
    printf("Sum of cube of digits is %d",sum);
    return 0;
}