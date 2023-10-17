#include <stdio.h>
int main() 
{
   int a = 5;
   int b = 10;
   int c = 15;
   int e;
 //precedence :multiplication and division have haigher presedence than addidtion and substraction
   e= a + b* c;
   printf("Value of a + b* cis : %d\n",  e );

   e = (a + b) * c;
   printf("Value of (a + b) * c is  : %d\n" ,  e );
   //associativity:operators with same precedence are left-associative(evaluated lest to right)

   e = a + b / c ;
   printf("Value of a + b / c  is  : %d\n",  e );

   e = (a - b) / c;
   printf("Value of  (a - b) / c/ d is  : %d\n" ,  e );
  
  return 0;
}