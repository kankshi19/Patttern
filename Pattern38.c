#include<stdio.h>
void main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for (i=5;i>0;i--)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}
