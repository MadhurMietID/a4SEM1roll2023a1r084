#include<stdio.h>
void main()
{
    float r;
    printf("enter the radius");
    scanf("%f",&r);
    float area,peri;
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("Area of circle=%.2f\n",area);
    printf("perimeter of circle=%.2f\n",peri);
}