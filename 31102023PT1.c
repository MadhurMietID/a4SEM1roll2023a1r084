//C Program to Display Armstrong Number Between Two Intervals
#include <stdio.h>
int main()
{
  int start, end, result, originalNum, number, remainder;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &start, &end);
  printf("Armstrong numbers between %d an %d are: ", start, end);
  for(result=start+1; result<end; ++result)
  {
      originalNum=result;
      number=0;
      while(originalNum!=0)
      {
          remainder=(originalNum%10);
          number+=remainder*remainder*remainder;
          originalNum/=10;
      }
      if(result==number)
      {
          printf("%d is an armstrong number between %d and %d\n",result ,start , end);
      }
  }
  return 0;
}