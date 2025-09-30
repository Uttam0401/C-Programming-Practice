//Write a program in C To Print Table Of The Given Numbers.

#include<stdio.h>
#include<conio.h>
  int main()
  {
    int Num1, Num2,i,j;
    printf("Enter The Starting Number:-");
    scanf("%d",&Num1);
    printf("Enter The Ending Number:-");
    scanf("%d",&Num2);
    for (i=Num1; i<Num2; i++)
    {
        for (j=1; j<=10; j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
    
    printf("\n\n");
    }

  }