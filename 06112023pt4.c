//c program for accessing array
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the number of elements of the array  ");
    scanf("%d",&n); 
    int arr[n];
    printf("Enter the %d elements of the array 'arr' \n",n);
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<n ;i++)
    {
        printf("\n%d %d %d %d ",arr[i],*(i+arr),*(arr+i),i[arr]);       
    }
}    
