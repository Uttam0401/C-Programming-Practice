//WAP to calculate the compound interest

#include<stdio.h>
#include<conio.h>
 int main()
 {
    int p,r,n,t,ci;
    printf("Enter the value of p: ");
    scanf("%d",&p);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of t: ");
    scanf("%d",&t);
    ci=p*1+r/n*n*t;
    printf("compound interest=%d", ci);
    getch();

    

 }