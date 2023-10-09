//control statement decision making and branching simple if 
//deduct 10 marks for bad handwriting
#include<stdio.h>
void main (){
    int mark;
    char ch;
    printf("enter the marks");
    scanf("%d",&mark);
    printf("Enter handwriting is bad(y/Yfor yes)");
    scanf("%c%c",&ch,&ch);
    if(ch=='y'||ch=='Y') 
    {
        mark=mark-10;
    }
    printf("the total marks is= %d",mark);
}