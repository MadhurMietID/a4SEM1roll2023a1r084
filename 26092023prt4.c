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
    float are=s*s;
    float per=4*s;
    printf("Area of square=%f",are);
    printf("perimeter of square=%f\n",per);
    int l,b;
    printf("Enter the length and breadth");
    scanf("%d%d" ,&l,&b);
    float ar=l*b;
    float pr=2*(l+b);
    printf("Area of rectangle=%f\n",ar);
    printf("perimeter of rectangle=%f",pr);    
}