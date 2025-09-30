//Write a program to enter three number compare within them and find smallest and largest between them.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
	int num1, num2, num3, largest, smallest;
	printf("Enter the first number ");
	scanf("%d", &num1);
	printf("Enter the second number ");
	scanf("%d", &num2);
	printf("Enter the third number ");
	scanf("%d", &num3);

	largest = num1;
	if (largest < num2)
	{
		largest = num2;
	}
	if (largest < num3)
	{
		largest = num3;
	}
	smallest = num1;
	if (smallest > num2)
	{
		smallest = num2;
	}
	if (smallest > num3)
	{
		smallest = num3;
	}
	printf("The largest number is: %d\n", largest);
	printf("The smallest number is: %d", smallest);
}