#include <stdio.h>
void main(){
    int a=3;
    int b=a++ + ++a + a++ + ++a;
    printf("%d",b);
}