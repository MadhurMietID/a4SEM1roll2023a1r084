//program to reverse the number
#include<stdio.h>
void main()
{
    int n , rem , rev = 0;
    printf("Enter an Integer number\t");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10+rem;\
        n/=10;
    }
    printf("reverse number = %d", rev);
}