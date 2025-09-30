//Write A Program To determine whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int Num1;
    printf("Enter Any Number:- ");
    scanf("%d", &Num1);
    
    if (Num1 < 0)
    {
    	printf("This Is Negative Numbers");
	}
	else if(Num1 > 0)
	{
		printf("This Is Positive Numbers");
	}
	else
	{
		printf("Number Is Zero");
	}
}
