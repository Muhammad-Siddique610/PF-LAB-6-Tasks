#include <stdio.h>

int main()
{
    int table;
    int i;
    printf("Enter The Number To Create Its Table ");
    scanf("%d",&table);
    for( i = 1 ; i <= table ; i++)
    {
        printf("%d \t x \t %d \t = \t %d\n",table, i , table * i);
    }
}
