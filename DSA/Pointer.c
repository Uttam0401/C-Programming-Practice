#include<stdio.h>
#include<stdlib.h>
void main(){
int a;
int* ptr = &a;
printf("Please Enter Any Number:- ");
scanf("%d",ptr);
printf("The Value In PTR = %d\n",*ptr);
ptr++;
printf("Please Enter Any Number:- ");
scanf("%d",ptr);
printf("The Value In PTR = %d\n",*ptr);
ptr++;
printf("Please Enter Any Number:- ");
scanf("%d",ptr);
printf("The Value In PTR = %d\n",*ptr);
ptr++;
}