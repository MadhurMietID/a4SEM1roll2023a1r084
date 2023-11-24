/*Adding dding a range of numbers. in this programm recursion is used to add a range of numbers together by breaking
 it down into the simple task of adding two numbers*/
int sum(int k);
int main() 
{
  int result = sum(10);
  printf("%d", result);
  return 0;
}
int sum(int k) 
{
  if (k > 0) 
  {
    return k + sum(k - 1);
  } 
  else 
  {
    return 0;
  }
}