#include<stdio.h>
void main()
{
    int i,j;
    for (i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=7;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    for (i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=7;j++)
        {
            printf("%d",j);
        }

        printf("\n");
    }

}
