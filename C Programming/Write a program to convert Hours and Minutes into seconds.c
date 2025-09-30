//Write a program to convert Hours and Minutes into seconds.
#include<stdio.h>
#include<conio.h>
  int main()
  {
    int hours,minutes,seconds;
    printf("Enter The Any Input:-");
    scanf("%d",&hours);
    minutes=hours*60;
    printf("Minutes Are In The Given Input=%d",minutes);
    seconds= minutes*60;
    printf("Seconds Are In The Given Input=%d",seconds);
    return 0;

  }