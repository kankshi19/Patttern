#include<stdio.h>
void main()
{
    int i,j,k=1;
    for (i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
