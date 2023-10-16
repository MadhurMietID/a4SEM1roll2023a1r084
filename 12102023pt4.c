//basic c loop program for printing multiplication table till 10
#include <stdio.h>
int main() 
{
int i=0,j;
  printf("Enter an integer: ");
  scanf("%d", &j);
  do 
  {
    printf("%d * %d = %d \n", j, i, j * i);
    ++i;
  } 
  while (i<11);
  }
