//WAP to enter three numbers & print the average of those numbers

#include<stdio.h>
#include<conio.h>
  int main()

  {
    int a,b,c,avg,sum;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("enter the value of c :");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("average of 3 numbers=%d",sum/3);
    getch();
  }