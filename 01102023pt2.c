// C Program to illustrate the static variable lifetime
#include <stdio.h>
 
// function with static variable
int fun()
{
    static int count = 0;
    count++;
    return count;
}
 
int main()
{
    printf("%d ", fun());
    printf("%d \n", fun());
    printf("This same program but with auto variable will give '1 1' as output");
}
