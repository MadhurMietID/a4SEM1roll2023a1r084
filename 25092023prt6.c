#include<stdio.h>
void main(){
    int a=10,b=11,c;
    c=a++ + ++b + b-- + b++;
    printf("%d\n",c);
}