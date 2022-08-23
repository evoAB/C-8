#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=5;i>0;i--)
    {
        int k=0,j;
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}
