//Write a program in c to print reverse of the given Numbers.

#include<stdio.h>
#include<conio.h>
  int main()
  {
  	int Num,rev = 0;
  	printf("Enter any value:-");
  	scanf("%d",&Num);
  	while(Num > 0)
  	{
  		rev = rev*10 + (Num%10);
  		Num = Num/10;
  		
	  }
	  Printf("Reverse of the Given Number = ",rev); 
  }
