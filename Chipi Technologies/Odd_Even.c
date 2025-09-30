//Write A Program To Determine whether a given integer is even or odd.
#include<stdio.h>
 int main()
 {
    int Num1;
    printf("Enter The Value Of A Num1:-");
    scanf("%d", &Num1);
    
    if (Num1 % 2 == 0)
    {
      printf("%d Is A Even Number",Num1);
    }
    else
    {
      printf("%d Is A Odd Number",Num1);
    }
    return 0;
 }
