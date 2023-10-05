#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    printf("enter value for the variables");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int distance=sqrt(pow((c-a),2)+pow((d-b),2));
    printf("enter the distance=%d",distance);
}
//this is for distance between 2 points :(a,b);(c,d)