#include<stdio.h>

int main(){
    int a, b, c;

    printf("enter the value of a,b-");

    scanf("%d %d", &a , &b);

    c = b;
    b = a;
    a = c;

    printf("new value of a : %d\n" , a);
    printf("new value of b: %d" , b);

    return 0;
}

