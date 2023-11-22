#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    int strlength;
    printf("enter the string\n");
    scanf("%s",str1);
    //gets(str1);
    strlength=strlen(str1);
    printf("given string lengthis:%d",strlength);
}