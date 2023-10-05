//this function is for volume and surface area of cone 
#include<stdio.h>
#include<math.h>
void main()
{
    float r,h;
    printf("enter the radius of cone");
    scanf("%f",&r);
    printf("enter the height of cone");
    scanf("%f",&h);
    float tsa=3.14*r*(r+sqrt(h*h+r*r));
    printf("the surface area of cone is=%f\n",tsa);  
    float vol=0.33*(3.14*r*r*h);
    printf("the volume of cone is=%f",vol);    
}