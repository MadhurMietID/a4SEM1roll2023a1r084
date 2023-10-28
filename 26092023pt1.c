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
    /*The %. 2f format specifier is used to format the floating-point value with two decimal places
     which is also called the format specifier for double.  
     “.2” tells your “printf” to print only the first 2 digits after the point.*/
}