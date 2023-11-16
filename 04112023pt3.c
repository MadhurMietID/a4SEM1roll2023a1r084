/*condition ? expression1 : expression 2;
true           print 
false                            print
WAP to read one number from the user
display 1 if the number is except 100 otherise 0.

100 print 0
any other print 1"*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number -->>");
    scanf("%d", &a);
    (a!=100) ? 1:2 ;
    return 0;
}