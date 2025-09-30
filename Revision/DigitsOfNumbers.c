//Write a program in  c to print digits of numbers.

#include<stdio.h>
#include<string.h>
void main(){
    int Number = 0;
    int Count = 0;
    printf("Please Enter Any Numbers:- ");
    scanf("%d",&Number);
    int temp = Number;
    do{
        Count++;
        Number /=10;
    }
    while(Number !=0);
    printf("You Entered The Numbers = %d\n",temp);
    printf("Digits Of Number: %d", Count);
}


