#include <stdio.h>

// function to swap two numbers using call by value
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// function to swap two numbers using call by reference
void swap1(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf(" %d ", &a);
    printf("Enter the value of b: ");
    scanf(" %d ", &b);

    // call by value
    printf("Before swapping, a = %d and b = %d\n", a, b);
    swap(a, b);
    printf("After swapping, a = %d and b = %d\n", a, b);

    // call by reference
    printf("Before swapping, a = %d and b = %d\n", a, b);
    swap1(&a, &b);
    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}