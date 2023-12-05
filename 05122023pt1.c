//write a c program to tell how many vowels and consonants are present in a  string
#include<stdio.h>

int main()
{
    char a[100];
    int i,vow = 0, con = 0;
    printf("Enter the string: ");
    scanf("%[^\n]s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            vow++;
        }
        else
        {
            con++;
        }
}
    printf("The number of vowels are: %d\n", vow);
    printf("The number of consonants are: %d\n", con);
    return 0;
}

