// C program to display index adress and memory address of elements of an array
#include <stdio.h>   
int main() 
{ 
    int n , location = 0;
    printf("Enter the number of elements of the array  ");
    scanf("%d",&n); 
    int arr[n];
    printf("Enter the of elements of the array 'arr' \n");
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&arr[i]);
    }
    for (int c = 0; c < n; c++)
  {
      printf("The index address of element - '%d' is %d\n",arr[c], c + 1);
  } 
}