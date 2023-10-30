//C Program to Find Sum of cube of Digits of a Number using While Loop
//This program allows the user to enter any positive integer.
#include <stdio.h>

int main()
{
  int Number, digit,cube, Sum=0;
  //input from the user
  printf("\n Please Enter any number\t");
  scanf("%d", &Number);
  //calculate the sum of digits using while loop
  while(Number != 0)
  {
     digit = Number % 10;//get the last digit
     cube = digit*digit*digit;
     Sum += cube;//add the digit to the sum
     Number = Number / 10;
     //remove the last digit from the number
  }
  //output the sum of cube of digits
  printf("\n Sum of cube of the digits of Given Number = %d", Sum);

  return 0;
}