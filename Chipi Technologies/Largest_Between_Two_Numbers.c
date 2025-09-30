//Write a program to find the largest of two given integers.

#include<stdio.h>
int main()
{
    int Num1, Num2;
    printf("Enter The First Number :- "); 
    scanf("%d",&Num1);
    printf("Enter The Second Number :- ");
    scanf("%d",&Num2);
    if (Num1 < Num2)
    {
        printf("The Second Number (%d) is The Largest Number",Num2);
    }
    else
    {
        printf("The First Number (%d) is The Largest Number",Num1);
    }
    return 0;
}