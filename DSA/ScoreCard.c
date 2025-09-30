#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int ScoreCard[11][3];
    int totalRuns = 0;
    int totalBalls = 0;
    for (int i = 0; i < 11; i++) {
            printf("Please Enter the Id Of Player %d:-", i + 1);
            scanf("%d", &ScoreCard[i][0]);
            printf("Enter The Numbers Of Balls %d:-", i + 1);
            scanf("%d", &ScoreCard[i][1]);
            totalBalls += ScoreCard[i][1];
            printf("Enter The Runs scored by Player %d:-", i + 1);
            scanf("%d", &ScoreCard[i][2]);
            totalRuns += ScoreCard[i][2];
        printf("\n");
    }
    printf("\nPlayer Id\tNumber of Ball\tRun\n");
    for (int i = 0; i < 11; i++) {
            printf("%d\t\t%d\t\t%d\n", ScoreCard[i][0], ScoreCard[i][1], ScoreCard[i][2]);
    }
    printf("\nTotalBalls of The Teams: %d", totalBalls);
    printf("\nTotalRuns of The Teams: %d", totalRuns);
}