#include <stdio.h>
int main()
{
    FILE *fil1;
    fil1=fopen("e:\\fil1.txt","w");
    fprintf(fil1,"hi im madhur");
    fclose(fil1);
    fil1=fopen("e:\\fil1.txt","r");   
    char c=fgetc(fil1);
    printf("%d",c); 
}    