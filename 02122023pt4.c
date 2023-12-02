#include <stdio.h>
int main()
{
    FILE *fil2;
    fil2=fopen("e:\\sample2.text","w");
    fprintf(fil2,"123456789");
    fclose(fil2);
}