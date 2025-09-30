// WAP to enter two numbers and print the quetient and remainder.

#include<stdio.h>
#include<conio.h>
   int main()
   {
    int a,b,quetient,remainder;
     printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    quetient=a/b;
    printf("quetient is=%d",a/b);
    remainder=a%b;
    printf("\nremainder is=%d",a%b);

    getch ();
    

   }