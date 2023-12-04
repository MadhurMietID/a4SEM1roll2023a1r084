//c program to compare two strings without using built in function
#include <stdio.h>
int main()
{
    char a[100], b[100];
    int len, i, flag = 0;
    printf("Enter the first string: ");
    scanf("%[^\n]s",a);
    printf("Enter the second string: ");
    scanf(" %[^\n]s", b);
    for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("The given strings are equal\n");
    else
        printf("The given strings are not equal\n");
}   