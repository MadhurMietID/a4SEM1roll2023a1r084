/*condition ? expression1 : expression 2;
true           print 
false                            print


If the number is > 10 and < 100 print "im insterested in c programmaing"
, if not then print  "im not insterested in c programmaing"*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number -->>");
    scanf("%d", &a);
    (a>=10 && a<=100) ? printf("im insterested in c programmaing") : printf("i am not intrested in c programming");
    return 0;
}