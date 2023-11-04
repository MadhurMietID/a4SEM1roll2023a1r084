/*condition ? expression1 : expression 2;
true           print 
false                            print

WAp to read one number from the user
If the number is 10 and  100 you have to print 1 
else 2 by using conditional operator*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number -->>");
    scanf("%d", &a);
    (a==10 || a==100) ? printf("1") : printf("i am not intrested in c programming");
    return 0;
}