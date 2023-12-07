#include <stdio.h>

int main()
 {
    int start, end;

    // Input range
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Ascending order
    printf("Ascending order: ");
    for (int i = start; i <= end; ++i)
    {
        printf("%d ", i);
    }

    // Descending order
    printf("\nDescending order: ");
    for (int i = end; i >= start; --i)
    {
        printf("%d ", i);
    }

    return 0;
}
