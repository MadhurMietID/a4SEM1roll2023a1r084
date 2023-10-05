#include <stdio.h>
void main(){ 
    float a,b,c;
    printf("enter two number");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("Sum=%f\n" ,c);
    c=a-b;
    printf("difference=%f/n" ,c);
    c=a*b;
    printf("product=%f\n" ,c);
    c=a/b;
    printf("divide=%.1f\n" ,c);
    return 0;
 }