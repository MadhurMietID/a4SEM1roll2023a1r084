// 12.2 Program to store information of a student using union
// Title of program
// Program to store information of a student using union
#include <stdio.h>
// function heading
int main()
{
    // use of union
    union student
    {
        // variable declaration
        int rollno;
        char name[50];
        float avg;
    };
    // variable declaration
    int n, i;
    // declaration of union
    union student s;
    // output statement
    printf("enter the student rollno\n");
    // input statement
    scanf("%d", &s.rollno);
    // output statements
    printf("student rollno:%d\n", s.rollno);
    printf("enter the student name\n");
    // input statement
    scanf("%s", s.name);
    // output statements
    printf("student name:%s\n", s.name);
    printf("enter the sudent average\n");
    // input statement
    scanf("%f", &s.avg);
    // output statement
    printf("Average:%f\n", s.avg);
    return 0;
}