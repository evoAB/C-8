#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=0;i<7;i++)
    {
        int count='A';
        for(j=i;j<7;j++)
            printf("%c",count++);

        for(k=0;k<i*2-1;k++)
            printf(" ");
        if(i==0)
            --count;
        while(count>65)
            printf("%c",--count);


        printf("\n");
    }
    return 0;
}
