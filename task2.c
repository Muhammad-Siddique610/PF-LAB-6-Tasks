#include <stdio.h>

int main()
{
    int i;
    printf("Odd Numbers from 1 to 20 are");
    for( i = 1 ; i <= 20 ; i++)
    {
        if(i % 2 == 1)
        {
            printf(" %d ",i);
        }
    }
}