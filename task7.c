#include <stdio.h>

int main()
{
    int pre1 = 1;
    int pre2 = 0;
    int i , noTerms;
    int sum = 0;
    printf("Enter The No Of Terms Of Fibonacci Series ");
    scanf("%d",&noTerms);
	
	printf("The Fibonacci Series upto %d terms is %d ",noTerms , pre2);
    for(i = 1 ; i < noTerms ; i++)
    {
    	printf("%d, ",pre1);
        pre1 += pre2;
        pre2 = pre1 - pre2;
    }
}
