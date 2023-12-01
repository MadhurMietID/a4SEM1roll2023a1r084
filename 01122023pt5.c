//c program to print duplicate elements in an array
#include <stdio.h>
int main()
{
    int n;
    printf("enter limit");
    scanf("%d",&n);
    int a[n],b[n],i,j;
    printf("\nEnter the elemnts:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i] = 0;
    }
    printf("Duplicate elements are....\n");
    for (i = 0; i < n;)
    {
        int flag = 0;
        if (b[i] == 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    flag = 1;
                    b[j] = 1;
                }
            }
            if (flag == 1)
            {
                printf("%d\n", a[i]);
            }
            i++;
        }
        else
            i++;
    }
    return 0;
}