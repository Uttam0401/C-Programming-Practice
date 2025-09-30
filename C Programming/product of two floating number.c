// WAP to enter two floating points numbers and print the product of those numbers.

#include<stdio.h>
#include<conio.h>
  int main()
  {
    float a,b,product;
    printf("Enter the value of a :");
    scanf("%f",&a);
    printf("Enter the value of b :");
    scanf("%f",&b);
    product=a*b;
    printf("product of those number is=%f",a*b);
    getch();
  }