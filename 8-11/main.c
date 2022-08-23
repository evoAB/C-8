#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=1;i<5;i++)
    {
        for(j=4-i;j>0;j--)
        {
            printf(" \t");
        }
        int count='A';
        for(k=1;k<=i*2-1;k++)
            if(k<=(2*i-1)/2)
                printf("\t%c",count++);
            else
                printf("\t%c",count--);

        printf("\n");
    }
    return 0;
}
