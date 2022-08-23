#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("*");
        for(j=1;j<i+1;j++)
            if(i==j||i==4)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}
