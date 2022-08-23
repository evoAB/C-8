#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=0; i<5; i++)
    {
        for(int j=5; j>0; j--)
            if(j>5-i)
                printf(" ");
            else
                printf("*");
        printf("\n");

    }
    return 0;
}
