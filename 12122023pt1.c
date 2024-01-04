// 13.1Program to read and write in a file
// title of program
// Program to read and write in a file
#include <stdio.h>
// function heading
#include <stdlib.h>
// header file for use of functions
int main()
{
    // Writing to a file
    FILE *file_write = fopen("file.txt", "w");
    if (file_write == NULL)
    {
        // output statement
        printf("Error opening file for writing");
        return 0;
    }
    fprintf(file_write, "Hello, this is a notebook of C!\n");
    fclose(file_write);
    printf("Successfully wrote to the file.\n");
    // Reading from a file using scanf
    FILE *file_read = fopen("file.txt", "r");
    if (file_read == NULL)
    {
        // output statement
        printf("Error opening file for reading");
        return 0;
    }
    else
    {
        // output statement
        printf("content read from the file.\n");
    }
    char ch;
    while (fscanf(file_read, "%c", &ch) == 1)
    {
        // write the char to the file
        putchar(ch);
    }
    fclose(file_read);
    return 0;
}