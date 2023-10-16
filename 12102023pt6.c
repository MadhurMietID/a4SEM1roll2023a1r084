//C program to print triangle pattern using * and loop
#include<stdio.h>
 int main() {
    int i,j,rows;
    //input number of rows from the user
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
    //Outer loop to iterate through through rows
    for(i = 1; i <= rows; i++) {
    /* Prints one row of triangle */
        for(j = 1; j <= i; ++j) {
           printf("* ");//print a star followed by a space
        }
        printf("\n");//Move to next line after each rpw
    }
    return 0;
}