#include<stdio.h>
void main() {
    int a,b,c,d,big;
    printf("Enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    big=a>b?a:b;
    big=big>c?big:c;
    big=big>d?big:d;
    printf("the greatest number=%d",big);
}