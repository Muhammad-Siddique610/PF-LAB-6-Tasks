#include <stdio.h>
int main()
{
    int num;
    int lastDigit;
    int reverse=0;
    int inum;

    printf("Enter the number to check palindrome: ");
    scanf("%d",&num);
    inum = num;
    while(inum != 0 )
    {
        lastDigit = inum%10;
        reverse = reverse*10 + lastDigit;
        inum = (inum-lastDigit)/10;
    }
    if(reverse == num)
    	printf("The Number Is Palindrome ");
	else
	printf("The Number Is Not Palindrome");
}
