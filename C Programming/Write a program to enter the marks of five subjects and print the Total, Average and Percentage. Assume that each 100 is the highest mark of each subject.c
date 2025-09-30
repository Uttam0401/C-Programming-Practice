//Write a program to enter the marks of five subjects and print the Total, Average and Percentage. Assume that each 100 is the highest mark of each subject
#include<stdio.h>
#include<conio.h>
   int main()
   {
    int Physics,Chemistry,Maths,Hindi,English,Total;
    float Average,Percentage;
    printf("Enter The Marks Of Physics:-");
    scanf("%d",&Physics);
    printf("Enter The Marks Of Chemistry:-");
    scanf("%d",&Chemistry);
    printf("Enter The Marks Of Maths:-");
    scanf("%d",&Maths);
    printf("Enter The Marks Of Hindi:-");
    scanf("%d",&Hindi);
    printf("Enter The Marks Of English:-");
    scanf("%d",&English);
    Total = Physics+Chemistry+Maths+Hindi+English;
    printf("Total Marks Of The Given Subjects=%d",Total);
    Average = Total/5;
    printf("\nAverage Of The Given Marks=%f",Average);
    Percentage = Total/55;
    printf("\nPercentage Of The Given Marks=%f",Percentage);
    return 0;

   }