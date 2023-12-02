//write a c program to create a file called sample3 in e drive . Read file and store in array and print
#include <stdio.h>
int main()
{
    FILE *fp = fopen("e:\\sample3.txt","w");
    fprintf(fp,"This is a sample file.\n");
    fprintf(fp,"It contains some text.\n");
    fclose(fp);
    fp = fopen("e:\\sample3.txt","r");
    char c=fgetc(fp);
    char st[200]={};
    int i=0;
    printf("%d",c);
    while(c!=EOF)
    {
        st[i]=c;
        i++;
        c=fgetc(fp);
    }
    printf("The file contents are:\n");    
    for(int j=3;j<=i;j++)
    {
        printf("%c",st[j]);
    }
    fclose(fp);
}