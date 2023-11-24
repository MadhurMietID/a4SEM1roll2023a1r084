//C Program to check matrix is magic square or not
#include <stdio.h>
void main() 
{
 int A[50][50];
 int i, j, M, N;
 int size;
 int rowsum, columnsum, diagonalsum;
 int magic = 0;
 printf("Enter the order of the matrix((no of rows)*(no of columns)):\n");
 scanf("%d %d", &M, &N);
 if(M==N) 
 {
 printf("Enter the elements of matrix \n");
 for(i=0; i<M; i++) 
 {
 for(j=0; j<N; j++) 
 {
 scanf("%d", &A[i][j]);
 }
 }
 printf("\n\nMATRIX is\n");
 for(i=0; i<M; i++) 
 {
 for(j=0; j<N; j++) 
 {
 printf("%3d\t", A[i][j]);
 }
 printf("\n");
 }
 // calculate diagonal sum 
 diagonalsum = 0;
 for(i=0; i<M; i++) 
 {
 for(j=0; j<N; j++) 
 {
 if(i==j) 
 {
 diagonalsum = diagonalsum + A[i][j];
 }
 }
 }
 // calculate row sum
 for(i=0; i<M; i++) 
 {
 rowsum = 0;
 for(j=0; j<N; j++) 
 {
 rowsum = rowsum + A[i][j];
 }
 if(rowsum != diagonalsum) 
 {
 printf("\nGiven matrix is not a magic square");
 return;
 }
 }
 // calculate column sum
 for(i=0; i<M; i++) 
 {
 columnsum = 0;
 for(j=0; j<N; j++) 
 {
 columnsum = columnsum + A[j][i];
 }
 if(columnsum != diagonalsum) 
 {
 printf("\nGiven matrix is not a magic square");
 return;
 }
 }
 printf("\nGiven matrix is a magic square matrix");
 } 
 else 
 {
 printf("\n\nPlease enter the square matrix order(m=n) \n\n");
 }
}