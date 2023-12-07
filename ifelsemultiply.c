//print multiplication table using if else
#include <stdio.h>
int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; ++i)
     {
        if (i == 1) 
            printf("%d x %d = %d (First)\n", number, i, number * i);
        else if (i == 10)
            printf("%d x %d = %d (Last)\n", number, i, number * i);
        else
            printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}