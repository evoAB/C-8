#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        int k=0,j;
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        while(k!=2*i-2)
        {
            printf(" ");
            k++;
        }
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
