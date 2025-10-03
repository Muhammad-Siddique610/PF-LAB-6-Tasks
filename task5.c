#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("What is the number you want to take factorial of? ");
    scanf("%d",&n);
    
    int factorial =1;
    for( i = 1 ; i <= n ; i++ )
    {
        factorial = factorial * i;
    }
    printf("The factorial of 5 is %d",factorial);
}