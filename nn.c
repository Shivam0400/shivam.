#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);  

    while (T--) {
        int N, H; // Number of matches and total duration of World Cup
        scanf("%d %d", &N, &H);

        if (N > 0) {
            int matches[N];
            for (int i = 0; i < N; i++) {
                scanf("%d", &matches[i]);
            }

            int totalDays = 0;
            int minMatches = 0;

            // Find the minimum number of matches needed
            for (int i = 1; i <= N; i++) {
                totalDays += matches[i - 1];
                if (totalDays >= H) {
                    minMatches = i;
                    break;
                }
            }

            printf("%d\n", minMatches);
        } else {
            // Handle the case when N is not greater than 0
            printf("Invalid input for N\n");
        }
    }

    return 0;
}
