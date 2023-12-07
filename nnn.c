#include <stdio.h>

int main() {
    int W, H; // Weight and height
    scanf("%d %d", &W, &H);

    // Chef's weight and height
    int chefWeight = 60;
    int chefHeight = 130;

    // Check if Chef can enter the waterslide
    if (W <= chefWeight && H >= chefHeight) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
return 0;
}