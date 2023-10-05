#include <stdio.h> 
void main()
{ int x;
  printf("enter your age here to check for position you can apply for in our company. The positions are Manager, Junior Dev, Senior Dev");
scanf("%d", &x);
if (x>=18)
{ 
    if (x<=25)
     
        printf("Eligible for junior dev"); }
     else { 
  if(x>=40) {  printf("You may be eligible for senior dev & manager");
}  
else { 
    if (x<18) 
    
        printf("Ineligible for this job");
    
else
   { printf("Eligible for senior dev only"); }
      } } }
