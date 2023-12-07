#include <stdio.h>  

int main() 
{
    int n;

    printf("Enter the  umber of rows (should be odd): ");
    scanf("%d", &n);

    int space = n / 2;
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 0; j < space; j++) 
        {
            printf(" ");    
        }
        space--;

        for (int j = 0; j < i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    space = 1;
    for (int i = n - 2; i >= 1; i -= 2)
     {
        for (int j = 0; j < space; j++) 
        {
            printf(" ");
        }
        space++;

        for (int j = 0; j < i; j++)
         {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
