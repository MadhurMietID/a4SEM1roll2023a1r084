#include<stdio.h>
#include<math.h>
void main()
{
   int choice;
   printf("Enter 1 for finding area and perimeter of Square ,2 for finding area and perimeter of Circle ,3 for finding area and perimeter of Rectangle ");
   scanf("%d",&choice);
   switch(choice) 
   {
    case 1: 
    {
        float side,area,peri;
        printf("Enter Sides of Square");
        scanf("%f",&side);
        area=(float)side*side;
        printf("Area of Square is %f\n",area);
        peri=(float)4*side;
        printf("Perimeter of Square is %f\n",peri);
        break;
    }
      case 2: 
    {
        float radius,area,peri;
        printf("Enter Radius of Circle");
        scanf("%f",&radius);
        area=(float)3.14*radius*radius;
        printf("Area of Circle %f\n",area);
        peri=(float)3.14*2*radius;
        printf("perimeter of Circle %f\n",peri);
        break;
    }
      case 3: 
    {
        float length,breadth,area,peri;
        printf("Enter Length and Breadth of Rectangle");
        scanf("%f %f",&length,&breadth);
        area=(float)length*breadth;
        printf("Area of Rectangle is %f\n",area);
        peri=(float)2*(length+breadth);
        printf("Perimeter of Rectangle is %f\n",peri);
        break;
    }
      default: 
    {
        printf("Invalid Choice");
        break;
    }
   }
}
