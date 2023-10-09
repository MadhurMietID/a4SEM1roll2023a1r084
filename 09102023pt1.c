//if else C program to check whether a character is vowel or consonant
#include <stdio.h>
int main()
{
    char ch;
    //Input character from user
    printf("Enter any character: ");
    scanf("%c", &ch);
    // Condition for vowel
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else
    {
        /* Condition for consonant */
        printf("'%c' is Consonant.", ch);
    }
    return 0;
}