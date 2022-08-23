#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=4;i>0;i--)
    {
        for(j=4-i;j>0;j--)
        {
            printf("  ");
        }
        int count='A';
        for(k=1;k<=i*2-1;k++)
            if(k<=(2*i-1)/2)
                printf(" %c",count++);
            else
                printf(" %c",count--);

        printf("\n");
    }
    return 0;
}
