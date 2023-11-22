//reversing a given string
#include<stdio.h>
#include<string.h>
void main()
{
    char str[30];
    printf("enter the string\n");
    gets(str);
    printf("reverse string is:%d",strrev(str));
}