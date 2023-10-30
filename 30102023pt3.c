//PART 2 --->>C Program to Find Sum of cube of Digits of a Number using For Loop
//This program allows the user to enter any positive integer.
#include <stdio.h>

int main()
{
  int Number, digit,cube, Sum=0;
  //input from the user
  printf("\n Please Enter any number\t");
  scanf("%d", &Number);
  //calculate the sum of digits using while loop
  for(Number = Number;Number > 0; Number /= 10)
  {
     digit = Number % 10;//get the last digit
     cube = digit*digit*digit;
     Sum += cube;//add the digit to the sum
  }
  //output the sum of cube of digits
  printf("\n Sum of cube of the digits of Given Number = %d", Sum);

  return 0;
}
