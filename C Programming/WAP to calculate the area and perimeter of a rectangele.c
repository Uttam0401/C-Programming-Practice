// WAP to calculate the area and perimeter of a rectangele
#include<stdio.h>
#include<conio.h>
   int main()
   {
    int Area,Perimeter,l,b,w;
    printf("enter the value of l: ");
    scanf("%d",&l);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("enter the value of w: ");
    scanf("%d",&w);
    Area=l*b;
    Perimeter=(l+w)*2;
    printf("Area of rectangle=%d",Area);
    printf("Perimeter of rectangle=%d",Perimeter);
    getch();


   }