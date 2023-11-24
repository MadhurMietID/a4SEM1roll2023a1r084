//C program to check whether a character is vowel or consonant and print 'ascii' value
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else
    {
        printf("'%c' is Consonant.", ch);
    }
    //ascii value
    printf("\n ASCII value of %c = %d", ch, ch);
    return 0;
}


