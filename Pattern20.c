#include<stdio.h>
void main()
{
    char i,j;
    for (i='E';i>='A';i--)
    {
        for(j='E';j>=i;j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}
