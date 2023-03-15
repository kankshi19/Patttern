#include<stdio.h>
void main()
{
    char i,j,k='A';
    for (i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++,k++)
        {
            printf("%c ",k);
        }
        printf("\n");
    }
}
