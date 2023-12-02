#include <stdio.h>
int main()
{
    FILE *fil2;
    fil2=fopen("e:\\fil2.txt","w");
    fprintf(fil2,"hi im madhur");
    fclose(fil2);
    fil2=fopen("e:\\fil1.txt","r");   
    char c=fgetc(fil2);
    //printf("%c",c); 
    while(c!=EOF)
    {
        printf("%c",c); 
        c=fgetc(fil2);
    }  
}    