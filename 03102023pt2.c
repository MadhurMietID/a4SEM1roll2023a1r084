#include<stdio.h>
void main() {
    int a,b,c,big;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    big=a>b?a:b;
    big=big>c?big:c;
    printf("the greatest number=%d",big);
}