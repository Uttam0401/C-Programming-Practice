#include<stdio.h>
  int sum(int num1,int num2)
  {
    int result=0;
    result=num1+num2;
    return result;
  }
  void main()
  {
    int a=10;
    int b=20;
    int total=0;
    total=sum(a,b);
    printf("\nThe sum is %d",total);
    total=sum(20,20);
    printf("\nThe sum is %d",total);
    a=50;
    b=30;
    total=sum(a,b);
    printf("\nThe sum is %d",total);
  }