#include<stdio.h>
void main()
{
    char i,j;

    for (i='E';i>'A';i--)
    {
        for(j=i;j>='A';j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    for (i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}
