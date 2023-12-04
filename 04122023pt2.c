// write a c program to find the length of a string without using 'built-in'function
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
}
/*This C program finds the length of a string without using any built-in function. 

Explanation step by step:
1. Include the standard input/output library (stdio.h).
2. Define the main function.
3. Declare a character array 'str' with a size of 100 to store the input string.
4. Declare two integer variables 'i' and 'len' and initialize 'len' to 0. 'i' will be used as a loop counter and 'len' will 
store the length of the string.
5. Display a message asking the user to enter a string using the printf function.
6. Read the input string from the user using the scanf function. %[^\n]s is used to read the entire line until a
 newline character is encountered.
7. Start a for loop with an empty condition. This loop will iterate indefinitely until the break statement is encountered.
8. Check if the character at the current index 'i' in the string is equal to the null character '\0'. If it is, then it means
the end of the string has been reached, so break out of the loop.
9. If the current character is not the null character, increment the 'len' variable by 1 to count the length of the string.
10. After the loop ends, display the length of the string using the printf function.
11. The program ends.

In summary, this program prompts the user to enter a string, reads the string, and then iterates through each 
character of the string until it encounters the null character '\0' which marks the end of the string. During this iteration, 
it counts the number of characters encountered and stores it in the 'len' variable. Finally, it displays the length of the string.*/