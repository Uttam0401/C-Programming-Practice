//WAP To Enter Two Numbers And Swap Them. Print The Changed Value.
#include<stdio.h>
  int main()
  {
    int a,b,c;
    printf("Enter The Value Of a ");
    scanf("%d",&a);
    printf("Enter The Value Of b ");
    scanf("%d",&b);
    printf("swaping the value before a%d and b%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter the swaping the value a%d and b%d",a,b);
    getch();
  }