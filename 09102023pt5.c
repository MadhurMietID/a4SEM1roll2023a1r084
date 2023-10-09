/*rogramme to determine eligibility for job.peoplr with age b/w 18 to 50 are eligible for job .
 18 to 25 age group is eligible for grade a job , others will have garde b job */
#include<stdio.h> 
void main()
{
    int x;
    printf("enter your age here to check for position");
    scanf("%d",&x);
    if (x>=18&&x<=50)
    {
        if (x>=18&&x<=25)
        {
        printf("Eligible for grade A job"); 
        }
        else
        {
            printf("You are  eligible for grade 'B'the job");
        }
    }
    else
    {
        printf("You are not eligible for the job");
    }
}