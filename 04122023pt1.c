// write a c program to find the length of a string without using 'built-in'function
#include <stdio.h>
void main()
{
    char str[100];
    int i, len = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of string is: %d", len);
}
/*The code is a C program that finds the length of a string without using any built-in function.
It prompts the user to enter a string, reads the input using scanf, and then iterates through the
string character by character until it reaches the null character '\0'.
The number of iterations is counted and printed as the length of the string.

Step by step explanation:
1. Include the standard input-output library <stdio.h>.
2. Define the main function which returns nothing (void).
3. Declare a character array 'str' of size 100 to store the input string.
4. Declare two integer variables 'i' and 'len' and initialize 'len' to 0.
5. Print a message to the user to enter a string.
6. Use scanf to read the input string until a newline character is encountered.
7. Use a for loop to iterate through the string character by character until it reaches the null character '\0'.
8. Increment the 'len' variable for each character in the string.
9. Print the length of the string using printf.*/