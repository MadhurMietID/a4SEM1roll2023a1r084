//write a c program to find the sum of ascii values of all characters in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, sum = 0;

    printf("Enter the string\n: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        sum = sum + str[i];
    }

    printf("The sum of ASCII values of all characters in the string is: %d\n", sum);

    return 0;
}
    

