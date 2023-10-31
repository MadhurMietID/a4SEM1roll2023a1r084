#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    int start, end, remainder,originalNum, number, n;  
    float result;  
  
    printf("Enter 2 integer numbers\n");  
    scanf("%d%d", &start, &end);  
  
    printf("\nArmstrong numbers between %d and %d\n", start, end);  
  
    for(number = start ; number <= end;++number)  
    {  
        number = originalNum;  
        n   = result  = 0;  
        //count the number of digits
        while(originalNum != 0)  
        {  
            originalNum = originalNum / 10;  //originalNum /= 10;
            n++;  
        }  
        //calculate the armstrong number
        while(originalNum != 0)  
        {  
            remainder = originalNum % 10;  
            result = result + pow(remainder, n);  //result += pow(remainder,n);
            originalNum= originalNum / 10;  //originalNum /= 10;
        }  
  
        if(result == number)  
        {  
            printf("%d is Armstrong number\n", number);  
        }  
  
        number++;  
    }  
  
    return 0;  
} 