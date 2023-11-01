#include<stdio.h>
extern int a=50;
void fun1()
void main()
{
    //register int a=5;
    fun1();
    fun1();
    fun1();
    {
        //static int a=10;
        printf("inside block1:%d\n",a);
    }
    printf("outside the block main is:%d\n",a);
}
void fun1()
{
    static int a,b=90;
    a=a+3;
    b=b-10;
    printf("outside from function fun a is:%d and b is:%d\n",a,b);
    a+=10;
}