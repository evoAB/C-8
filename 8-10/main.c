#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=0;i<4;i++)
    {
        int count=1;
        for(j=i;j<4;j++)
            printf("%d",count++);

        for(k=0;k<i*2-1;k++)
            printf(" ");
        if(i==0)
            --count;
        while(count>1)
            printf("%d",--count);


        printf("\n");
    }
    return 0;
}
