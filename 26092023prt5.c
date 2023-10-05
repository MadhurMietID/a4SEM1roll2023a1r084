#include<stdio.h>
#include<math.h>
void main() {
    int l=44,b=56,area;
    float r;
    area=l*b;
    printf("the area of rec=%d\n",area);
    r=sqrt(area/3.14);
    float peri;
    peri=3.14*2*r;
    printf("the perimeter of circle=%f",peri);
}
