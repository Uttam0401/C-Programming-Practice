//Write a program to Enter three numbers and check if all the three numbers are same or not.
#include<stdio.h>
#include<conio.h>
  int main()
  {
    int a,b,c;
    printf("Please Enter First Numbers:-");
    scanf("%d",&a);
    printf("Please Enter Second Numbers:-");
    scanf("%d",&b);
    printf("Please Enter Third Numbers:-");
    scanf("%d",&c);
     
     if(a == b == c)
     {
        printf("Enter All Three Numbers Are Same");
     }
     else
     {
        printf("Enter All Three Numbers Are Not Same");
     }
     return 0;
  }