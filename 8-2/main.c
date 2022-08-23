#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<5;j++)
            if(j<5-i)
                printf(" ");
            else
                printf("*");
        printf("\n");
    }
    return 0;
}
