#include <stdio.h>
void main(){
    int a = 49,b = 35 ,c = 55;
    printf("AND gate=%d\n" , (a&b));
    printf("OR gate=%d\n",(a|b));
    printf("XOR=%d\n" ,(a^b));
    printf("Left shift=%d\n",(c<<2)); 
    printf("Right shift=%d\n" ,(c>>2));
    printf("XOR=%d\n" ,(~a));
}
