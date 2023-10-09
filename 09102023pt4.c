//control statement decision making and branching simple if 
//Give extra 10 marks for good handwriting , deduct 10 marks for bad handwriting
#include<stdio.h>
void main (){
    int mark;
    char ch;
    printf("enter the marks:-");
    scanf("%d",&mark);
    printf("Is handwriting is good Enter y/Y for yes:-");
    scanf("%c%c",&ch,&ch);
    if(ch=='y'||ch=='Y') 
    {
        mark=mark+10;
    }
    else
    {
        mark=mark-10;
    }
    printf("the total marks is= %d",mark);
}