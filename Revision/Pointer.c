//Pointer In C.

#include<stdio.h>
#include<stdlib.h>
 int main(){
    int Num = 100;
    int *ptr = &Num;
    printf("The Address Of Num = %d",ptr);
    printf("\nThe Values Are Store In The Address Of Pointer = %d",*ptr);
    *ptr = 200;
    printf("\nThe Values Are Store In The Address Of Pointer = %d",*ptr);
 }