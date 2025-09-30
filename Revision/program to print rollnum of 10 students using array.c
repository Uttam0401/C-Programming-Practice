//*********************Array**********************
//Intro To Array In C..
//program to print RollNumber of 10 students using array
#include<stdio.h>
#include<conio.h>
 void main()
 {
    int rollNumber[10];//One Dimensional Array..
    for(int i = 0; i < 10; i++)
    {
        printf("Please Enter Roll Number");
        scanf("%d", &rollNumber[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("\nThe Roll Number Are %d",rollNumber[i]);

    }
 }
 
