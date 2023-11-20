//title of program
//Program for sum of two matrix
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int i,j,mat1[10][10],mat2[10][10],mat3[10][10],size=3;
//condition for sum of two matrix
for(i=0;i<size;i++){
for(j=0;j<size;j++){
//output statement 
printf("enter the element mat1[%d][%d]",i,j);
//input statement 
scanf("%d",&mat1[i][j]);
}
}
for(i=0;i<size;i++){
for(j=0;j<size;j++){
//output statement 
printf("enter the element mat2[%d][%d]",i,j);
//input statement 
scanf("%d",&mat2[i][j]);}
}
for(i=0;i<size;i++){
for(j=0;j<size;j++){
mat3[i][j]=mat1[i][j]+mat2[i][j];}
}
for(i=0;i<size;i++){
for(j=0;j<size;j++){
//output statement
printf("%d\t",mat3[i][j]);
}
//output statement 
printf("\n");
}
}
