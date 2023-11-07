// C program to copy all the elements of one array to another 
#include <stdio.h>   
int main() 
{ 
    int n;
    printf("Enter the number of elements of the array  ");
    scanf("%d",&n); 
    int a[n] , b[n];
    printf("Enter the of elements of the array 'a' \n");
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&a[i]);
    } 
    // copying elements from one array to another 
    for (int i = 0 ; i < n ; i++) 
    { 
        b[i] = a[i]; 
    } 
    // displaying first array before copy the elements from  one array to other 
    printf("The first array 'a'is :"); 
    for (int i = 0 ; i < n ; i++) 
    { 
        printf("%d ", a[i]); 
    } 
    // displaying array after copy the elements from one array to other 
    printf("\nThe second array 'b' is :"); 
    for (int i = 0 ; i < n ; i++) 
    { 
        printf("%d ", b[i]); 
    } 
    return 0; 
}
