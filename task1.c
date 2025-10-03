#include <stdio.h>

int main()
{
    int i;
    int n = 20;
    printf("Even Numbers from 2 to 20 are");
    for(i = 2 ; i <= n ; i++)
    {
        if(i % 2 == 0)
        {
            printf(" %d ",i);
        }
    }

}
