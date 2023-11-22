//c program to calculate average of the marks
#include<stdio.h>
int avg(int[],int);
void main()
{
int mark[]={77,88,99,88,99};
int size,average;
size=sizeof(mark)/sizeof(mark[0]);
average=avg(mark,size);
printf("average=%d\n",average);
printf("inside the main function size of array(in bytes)is:%d",sizeof(mark));
}
int avg(int mark1[],int size)
{
    int i,sum=0,average=0;
    for(i-0;i<size;i++)
    {
        sum=sum+mark1[i];
        average=sum/size;
    }
        printf("inside the sub function size of array(in bytes)is:%d\n",sizeof(mark1));
        return average;    
}    