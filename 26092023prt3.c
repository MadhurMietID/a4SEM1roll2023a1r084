#include<stdio.h>
void main()
{
    float r;
    printf("enter the width of rectangle");
    scanf("%f",&r);
    float a;
    printf("enter the length of rectangle");
    scanf("%f",&a);    
    float area,peri;
    area=r*a;
    peri= 2*(a+r);
    printf("Area of rectangle=%.2f\n",area);
    printf("perimeter of rectangle=%.2f\n",peri);
}