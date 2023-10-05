//to print area and perimeter of circle ,square , rectangle
#include<stdio.h>
void main()
{
    float r;
    int a,b,s;
    printf("enter the radius of circle\n");
    scanf("%f",&r);
    printf("enter the length of rectangle\n");
    scanf("%d",&a);   
    printf("enter the width of rectangle\n");
    scanf("%d",&b); 
    printf("enter the side of square\n");
    scanf("%d",&s);    
    int area=b*a;
    int peri= 2*(a+b);
    int are = s*s;
    int per = 4*s;
    float ar = 3.14*r*r;
    float pr =3.14*2*r;
    printf("Area of rectangle=%d\n",area);
    printf("perimeter of rectangle=%d\n",peri);
    printf("Area of square=%d\n",are);
    printf("perimeter of square=%d\n",per);
    printf("Area of circle=%.2f\n",ar);
    printf("perimeter of circle=%.2f\n",pr);
}