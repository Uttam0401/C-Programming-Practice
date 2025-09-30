// Write a C# Sharp program to print the output of multiplication of three numbers which will be entered by the user
#include<stdio.h>
  int main()
  {
    int num1,num2,num3,multiplication;
    printf("Enter the first Number:-");
    scanf("%d",&num1);
    printf("Enter the Second Number:-");
    scanf("%d",&num2);
    printf("Enter the Third Number:-");
    scanf("%d",&num3);
    multiplication=num1*num2*num3;
    printf("Multiplication of three numbers=%d",multiplication);
    return 0;
  }