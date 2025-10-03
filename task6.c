#include <stdio.h>

int main()
{
    int n;
    int i;
    int multiple=0;
    
    printf("Enter The Number To Check If It Is Prime Number Or Not ");
    scanf("%d",&n);
    for( i = 2 ; i < n && multiple == 0; i++)
    {
        if(n % i == 0)
        {
            multiple++;
        }
    }
    if(multiple == 0)
    {
        printf("%d is a prime number ",n);
    }
    else
    {
        printf("%d is not prime number",n);
    }
}
