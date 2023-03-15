#include<stdio.h>
void main()
{
    int i,j;
    for (i=0;i<=6;i++)
    {
        for(j=0;j<=6;j++)
        {
            if(i==j)
            {
                printf("%d ",j);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

