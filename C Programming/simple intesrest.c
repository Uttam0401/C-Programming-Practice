#include<stdio.h>
#include<conio.h>
  void main()
  {
    
    int P,R,T,SI;

    printf("Enter the value of P :");
    scanf("%d",&P);
    printf("Enter the value of R :");
    scanf("%d",&R);
    printf("Enter the value of T :");
    scanf("%d",&T);
    SI=P*R*T/100;
    printf("Simple interest= %d", SI);
    
    getch();
  }