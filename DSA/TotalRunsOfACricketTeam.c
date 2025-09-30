//Write a program in c to calculate the total runs of a cricket teams..
#include <stdio.h>
int main(){
    int ScoreCard[11][3];
    int totalRuns = 0;
    int totalBalls = 0  ;
    for(int i=0;i<11;i++){
        //for(int j=0;j<1;j++){
            printf("Please Id Of Player %d:-", i+1);
            scanf("%d",&ScoreCard[i][0]);
            printf("Enter The Numbers Of Balls %d:-", i+1);
            scanf("%d",&ScoreCard[i][1]);
            totalBalls +=ScoreCard[i][1];
            printf("Enter The Runs Of Player %d:-", i+1);
            scanf("%d",&ScoreCard[i][2]);
            totalRuns +=ScoreCard[i][2];

       // }
        printf("\n");
    }
    printf("\nPlayer Id\tNumber of Ball\tRun");
    for(int i=0;i<11;i++) {
        //for(int j=0;j<1;j++) {
            printf("%d\t%d\t%d", ScoreCard[i][0],ScoreCard[i][1],ScoreCard[i][2]);
            
       // }
    }
    printf("\nTotalBalls of The Teams: %d\n",totalBalls);
    printf("\nTotalRuns of The Teams: %d\n",totalRuns);


}

