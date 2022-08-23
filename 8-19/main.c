#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<19;j++)
        {
            if(((2-i <= j) && (j<=6+i))||((12-i<=j)&& (16+i>=j)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("****** MySirG *****\n");
    for(i=9;i>0;i--)
    {
        for(j=10-i;j>0;j--)
        {
            printf(" ");
        }
        int count=1;
        for(k=1;k<=i*2-1;k++)
            printf("*");

        printf("\n");
    }
    return 0;
}
