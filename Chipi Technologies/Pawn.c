//Write a program to the print the current and the next move of the pawn.

#include<stdio.h>
#include<conio.h>
  int main()
  {
  	int Current,Next,Sub,Add;
  	printf("Enter The Value Of Current Pawn:-");
  	scanf("%d",&Current);
  	printf("Enter The Value Of Next Pawn:-");
  	scanf("%d",&Next);
  	Sub = Next - Current;
  	Add = Current + Next;
  	if(Sub <= 8)
	  {
	  printf("Your Pawn Is Moved Succesfully");
      }
      else if(Add >= 64)
      {
      	printf("No More Moves.(Please Select Between 1 - 64)");
	  }
	  else
	  {
	  	printf("Invalid Moves");
	  }
	  return 0;
  	}
