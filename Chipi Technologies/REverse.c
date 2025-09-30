//Write a program  in C to print reverse of the given numbers./*

#include<stdio.h>


int main()
{
	int Num,Rev = 0,Number,Rem;
	printf("Enter any Numbers:-");
	scanf("%d",&Num);
     Number = Num;
    while(Num > 0)
	{   
        Rem = Num%10;
		Rev = Rev*10 + Rem;
		Num = Num/10;
        
	}
	printf("reverse of the given number %d is %d",Number,Rev);
 } */
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Get the absolute value to handle negative numbers
    number = abs(number);
    
    // Extract the second last digit
    int second_last_digit = (number / 10) % 10;
    
    printf("The second last digit of the number is: %d\n", second_last_digit);
    
    return 0;
}