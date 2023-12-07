//wap to print the series 2,4,7,11,16,...
#include<stdio.h>
int main()
{
    int n,i,s=1;
    printf("Enter the number of terms u want to print the series .. ");
    scanf("%d",&n);
    printf("The required series : : ");
    for(i=1;i<=n;i++)
    {
          s=s+i;
        printf("%d, ",s);
    }
    return 0;
}