//Write a program to find the largest of two given integers.

#include<stdio.h>
int main()
{
    int Num1, Num2;
    printf("Enter The First Number :- "); 
    scanf("%d",&Num1);
    if(Num1 < 10)
    {
        printf("This Is Very Small Numbers :");
    }
    else if(Num1 >= 10 && Num1 <= 20)
    {
        printf("This Is Small Numbers :");
    }
    else if(Num1 > 20 && Num1 <= 50)
    {
        printf("You Have Entered A Little Bigger Number :");
    }
    else{
    printf("You Have Entered A Big Number :");
    }
    return 0;
}