#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<9;j++)
        {
            if(j==4-i||j==4+i||i==4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
