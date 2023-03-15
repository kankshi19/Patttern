#include<stdio.h>
void main()
{
    char i,j;
    for (i='E';i>='A';i--)
    {
        for(j=i;j>='A';j--)
        {
            printf(" ");
        }
        for(j='E';j>=i;j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}
