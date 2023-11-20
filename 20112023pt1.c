//title of program
//Program for sum of single matrix
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int i,j,mat[10][10],size=3,sr=0,sc=0;
//condition for sum of matrix
for(i=0;i<size;i++){
for(j=0;j<size;j++){
//output statement 
printf("enter the element mat[%d][%d]",i,j);
//input statement 
scanf("%d",&mat[i][j]);
}
}
for(i=0;i<size;i++){
sr=sc=0;
for(j=0;j<size;j++){
sr=sr+mat[i][j];
sc=sc+mat[j][i];}
//output statement 
printf("\n%d:sr=%d and %d:sc=%d",i,sr,i,sc);
}
for(i=0;i<size;i++){
for(j=0;j<size;j++){
//output statement
printf("\t%d",mat[i][j]);
}
//output statement 
printf("\n");
}
}
