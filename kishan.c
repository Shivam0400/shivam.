#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m=1;
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("%d",m);
            }
            else
            {
                printf(" ");
            }
            m++;
        }
       printf("\n");

    }
    return 0;
}