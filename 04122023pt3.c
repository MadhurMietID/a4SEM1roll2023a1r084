// write a c program to find the length of a string without using 'built-in'function.after this copy string to another array
#include <stdio.h>
void main()
{
    char str[100];
    int i, len = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for (i = 0;; i++)
    {
        if (str[i] == '\0')
            break;
        else
            len++;
    }
    printf("Length of string is: %d", len);
    char b[len];
    for(i=0;i<len;i++)
    {
        b[i]=str[i];
    }
    printf("\nThe copied String is:%s",b);
}
