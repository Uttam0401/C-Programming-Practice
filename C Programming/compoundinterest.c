//WAP and calculate the compound interest.
#include<stdio.h>
#include<conio.h>
  int main()
  {
    int A,P,r,n,N,t;
    printf("enter the value of P :");
    scanf("%d",&P);
    printf("enter the value of r :");
    scanf("%d",&r);
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("enter the value of t :");
    scanf("%d",&t);
printf("enter the value of N :");
    scanf("%d",&N);
    A=P*1+r/n*N*t;
    printf("compound interest=%d",A);
    getch();

  }