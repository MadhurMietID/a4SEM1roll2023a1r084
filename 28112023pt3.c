//print addition,substraction,multiplication , division of two  numbers with all the categories of the function
#include<stdio.h>
void main()
{
int add(int,int);
int subtract();
void multiply(int,int);
void divide();
  int a,b,c;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  c= add(a,b);
  printf("%d + %d = %d\n", a, b,c);
  c=subtract();
  printf("%d - %d = %d\n", a, b,c);
  multiply(a,b);
  divide();
}
int add(int x, int y)
{
  int result= x + y;
  return result;
}
int subtract()
{
  int x,y;
  printf("Enter two numbers");
  scanf("%d%d",&x,&y);
  int result;
  result = x - y;
  return result;
}
void multiply(int x, int y)
{
  int result;
  result = x * y;
  printf("Mul=%d\n",result);
}
void divide()
{
  int x,y;
  printf("Enter two numbers");
  scanf("%d%d",&x,&y);
  if(y!=0)
  {
    int z=x/y;
    printf("Div=%d",z);
  }
  else
  printf("Indifinite");
}