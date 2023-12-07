#include <stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the number : \n");
    scanf("%d", &n);
    for(i=1;i<=n;++i)
    {
        m=1;
        for(j=1;j<=n;++j)
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