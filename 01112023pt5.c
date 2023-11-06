#include<stdio.h> 
void autoStorageClass()
{ 
  printf("\nDemonstrating auto class\n\n");  
  auto int a = 32; 
  printf("Value of the variable 'a'"" declared as auto: %d\n", a); 
} 
void staticStorageClass() 
{  
    printf("\nDemonstrating static class\n\n");  
    printf("Declaring 'y' as static inside the loop.\n"); 
    for (int i = 1; i < 5; i++) 
    { 
        static int y = 5; 
        int p = 10; 
        y++; 
        p++; 
        printf("\nThe value of static variable 'y'in %d iteration is %d\n", i, y); 
        printf("The value of non-static variable 'p' in %d iteration is %d\n", i, p); 
    }
}    
int main() 
{ 
  
    printf("A program to demonstrate"
           " Storage Classes in C\n\n"); 
    // To demonstrate auto Storage Class 
    autoStorageClass();  
    // To demonstrate static Storage Class 
    staticStorageClass(); 
    return 0; 
} 
  