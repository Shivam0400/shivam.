#include<stdio.h>
int main()
{
    long long int n,i,s=2;
    printf("Enter the number of terms u wannt to print :: ");
    scanf("%lld",&n);
    for(i=1;i<=n;++i)
    {
        printf("%lld ",s);
         s=s*s; 
    }
    return 0;
}
//series 2,4,16,256.........