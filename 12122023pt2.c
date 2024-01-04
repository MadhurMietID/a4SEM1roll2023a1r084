// 13.2 Program for reading and writing the student marks data to files
// title of program
// Program for reading and writing the student marks data to files
#include <stdio.h>
// function heading
#include <stdlib.h>
// header file
int main()
{
    // variable declaration
    int q1, q2, q3;
    char fname[30];
    FILE *ifp, *ofp;
    // for opening the input and output files
    ifp = fopen("input.txt", "r");
    ofp = fopen("Output.txt", "w");
    if (ifp == NULL || ofp == NULL)
    {
        // output statement
        printf("error while opening the file.\n");
        exit(0);
    }
    while (!feof(ifp))
    {
        // input statement
        fscanf(ifp, "%s %d %d %d", fname, &q1, &q2, &q3);
        // output statements
        printf("%s %d %d %d\n", fname, q1, q2, q3);
        fprintf(ofp, "%s %d %d %d\n", fname, q1, q2, q3);
    }
    // output statements
    printf("copied the file\n");
    printf("\n");
    fclose(ofp);
    fclose(ifp);
    return 0;
}
/*This program is used to read and write the student marks data to files.
 The program first declares variables such as quiz 1, quiz 2, and quiz 3 marks. 
 It also declares variables for the file name, input file pointer, and output file pointer.

The program then opens the input file "input.txt" and the output file "Output.txt" using the fopen() function. 
If the file opening fails, an error message will be displayed, and the program will exit.

The program then enters a loop that continues until the end of the input file is reached. 
Within this loop, the program reads the student name, quiz 1, quiz 2, and quiz 3 marks from the input file using 
the fscanf() function. The program then displays the student marks data on the screen using the printf() function 
and writes the same data to the output file using the fprintf() function.

After all the records in the input file have been processed, the program closes the input and
 output files using the fclose() function and exits.

The output of this program will be the same as the input, but the data will also be written to 
the output file "Output.txt".</s>

Example of how to use this program:

Save the program in a file called "StudentMarks.c".
Compile the program using a C compiler like GCC.
Create an input file called "input.txt" with the following content:
Copy code
John 80 75 90
Sam 95 80 70
Linda 85 75 80
Run the compiled program. The output will be:
Copy code
John 80 75 90
Sam 95 80 70
Linda 85 75 80
After running the program, you can find the "Output.txt" file in the same directory with the same content as 
the input file.*/