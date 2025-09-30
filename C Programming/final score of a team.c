// Write a program to calculate the final score of a team ,given that
//Number of 1s
//Number of 2s
//Number of 3s
//Number of Fours
//Number of Sixes
//Number of 5 Runs
//Number of Wide Balls
//Number of “No Balls”

#include<stdio.h>
#include<conio.h>
  int main()
  {
    int ones,twos,threes,fours,fives,sixes,wide_ball,no_ball,final_score=0;
    printf("enter the numbers of ones: ");
    scanf("%d",&ones);
    printf("enter the numbers of twos: ");
    scanf("%d",&twos);
    printf("enter the numbers of three: ");
    scanf("%d",&threes);
    printf("enter the numbers of fours: ");
    scanf("%d",&fours);
    printf("enter the numbers of fives: ");
    scanf("%d",&fives);
    printf("enter the numbers of sixes: ");
    scanf("%d",&sixes);
    printf("enter the numbers of wide ball: ");
    scanf("%d",&wide_ball);
    printf("enter the numbers of no ball: ");
    scanf("%d",&no_ball);
    final_score=ones+2*twos+3*threes+4*fours+5*fives+6*sixes+wide_ball+no_ball;
    printf("final score of a team=%d",final_score);
    getch();
  }