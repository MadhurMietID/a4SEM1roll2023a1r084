//program to calculate factorial of a person using a loop
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;//Use unsigned long long to store large factorial values
    //Input from user
    printf("Enter an integer: ");
    scanf("%d", &n);
    //Check if the input number is negative
    // shows error if the user enters a negative integer
    if (n < 0){
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else {
        //calculate factorial using a for loop
        for (i = 1; i <= n; ++i) {
            fact *= i;//Multiply factorial by the current number
        }
        //Output the factorial
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
