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
    int s;
    printf("enter the side of square");
    scanf("%d",&s);
    area=s*s;
    peri=4*s;
    printf("Area of square=%f",area);
    printf("perimeter of square=%f",peri);
    int l,b;
    printf("Enter the length and breadth");
    scanf("%d%d ,&l,&b");
    area=l*b;
    peri=2*(l+b);
    printf("Area of rectangle=%f",area);
    printf("perimeter of rectangle=%f",peri);    
}