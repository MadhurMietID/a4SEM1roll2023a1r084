// write a c program to check is a string is palindrome with string built in functions
#include <stdio.h>

int main()
{
    char a[100], b[100];
    int len = 0, i, flag = 0;
    
    printf("Enter the string: ");
    scanf("%[^\n]s", a);
    
    for (i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    
    for (i = 0; i < len; i++)
    {
       b[i] = a[len-1-i];
    }
    
    for(i = 0; i < len; i++)
    {
        if(a[i] != b[i])
        {
            flag = 1;
            break;
        }
    }
    
    printf("The string is %s\n", a);
    
    if (flag == 0)
        printf("The given string is a palindrome\n");
    else
        printf("The given string is not a palindrome\n");
        
    return 0;
}   