#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=4;j>0;j--)
            if(i==j || i==4)
                printf("*");
            else
                printf(" ");
        printf("*");
        printf("\n");
    }
    return 0;
}
