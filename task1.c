#include <stdio.h>

int main()
{
    int i;
    int n = 20;

    //printf("What is the maximum range you want to see even numbers between? ");
    //scanf("%d",&n)

    //mam i kept the n value as hardcoded if it is needed to be input based just uncomment above.
    printf("Even Numbers from 2 to 20 are");
    for(i = 2 ; i <= n ; i++)
    {
        if(i % 2 == 0)
        {
            printf(" %d ",i);
        }
    }
}