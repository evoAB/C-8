#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=6-i;j>0;j--)
        {
            if(i!=5)
            if(j==1)
                printf("*");
            else
                printf(" ");
        }
        for(k=1;k<=i*2-1;k++)
            if(k==i*2-2 || i==5)
                printf("*");
            else
                printf(" ");

        printf("\n");
    }
    return 0;
}
