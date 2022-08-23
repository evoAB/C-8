#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=5-i;j>0;j--)
        {
            printf(" ");
        }
        int count=1;
        for(k=1;k<=i*2-1;k++)
            printf("*");

        printf("\n");
    }
    for(i=4;i>0;i--)
    {
        for(j=4-i;j>0;j--)
        {
            printf(" ");
        }
        int count=1;
        printf(" ");
        for(k=1;k<=i*2-1;k++)
            printf("*");

        printf("\n");
    }
    return 0;
}
