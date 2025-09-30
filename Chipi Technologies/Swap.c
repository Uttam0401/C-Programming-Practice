//Write A Program In c To Print Swap The Value Of The Two Variables.
#include <stdio.h>
  int main()
  {
    int Num1, Num2,Temp;
    printf("Enter The Value Of Num1:-");
    scanf("%d",&Num1);
    printf("\nEnter The Value Of Num2:-");
    scanf("%d",&Num2);
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
    //After Swaping The Value Of The Two Variables Are.
    printf("After Swaping :-\n The Value Of Num1 = %d \n The Value Of Num2 = %d ", Num1, Num2);
    return 0;


  }