//control statement decision making and branching simple if 
//extra 10 marks for good handwriting
#include<stdio.h>
void main (){
    int mark;
    char ch;
    printf("enter the marks");
    scanf("%d",&mark);
    printf("Enter handwriting is good or bad");
    scanf("%c%c",&ch,&ch);
    if(ch=='y'||ch=='Y') 
    {
        mark=mark+10;
    }
    printf("the total marks is= %d",mark);
}