//title of the program
//Program to store the information of student marks using structures and find total marks of individual student
#include<stdio.h>
//function heading
void main()
{
//structure variable
struct student 
{
//variable declaration
int m1,m2,m3;
int tot;
float avg;
};
//structure variable
struct student s1;
int i;
//output statement 
printf("enter the student marks");
//input statement 
scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
s1.tot=s1.m1+s1.m2+s1.m3;
s1.avg=(float)s1.tot/3.0;
//output statements
printf("student marklist");
printf("subject1:%d\n",s1.m1);
printf("subject2:%d\n",s1.m2);
printf("subject3:%d\n",s1.m3);
printf("total:%d\n",s1.tot);
printf("average:%f\n",s1.avg);
}
