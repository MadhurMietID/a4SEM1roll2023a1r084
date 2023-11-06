// C program to copy all the elements 
// of one array to another 
#include <stdio.h> 
  
int main() 
{ 
    printf("Enter the number of elements of the array  ");
    int n;
    scanf("%d",n); 
    int a[n];
    int b[n], i;
    for(int i=0;i<n ;i++)
    {
        scanf("%d",&a[i]);
    } 
    // copying elements from one array to another 
    for (i = 0; i < n; i++) { 
        b[i] = a[i]; 
    } 
    // displaying first array before 
    // copy the elements from 
    // one array to other 
    printf("The first array is :"); 
    for (i = 0; i < n; i++) { 
        printf("%d ", a[i]); 
    } 
    // displaying array after copy 
    // the elements from one 
    // array to other 
    printf("\nThe second array is :"); 
    for (i = 0; i < n; i++) { 
        printf("%d ", b[i]); 
    } 
    return 0; 
}
