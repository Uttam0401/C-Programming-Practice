#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int num;
	printf("Enter an integer  "); //Display the message
	scanf("%d", &num); //Accept input from user and store in the 'num' variable

	if (num % 2 == 0)
	{
		printf("%d is an Even number", num);
	}
	else
	{
		printf("%d is an Odd number", num);
	}
}