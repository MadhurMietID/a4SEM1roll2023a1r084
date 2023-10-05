#include<stdio.h>
void main()
{
    float r;
    printf("enter the side of square");
    scanf("%f",&r);
    float area,peri;
    area=r*r;
    peri= 4*r;
    printf("Area of square=%.2f\n",area);
    printf("perimeter of square=%.2f\n",peri);
}