#include<stdio.h>
void main()
{
    int i,j;
    for (i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=0;i<5;i++)
    {
        for(j=0;j<=i+1;j++)
        {
            printf(" ");
        }
        for(j=i;j<4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
