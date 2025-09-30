#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int a[3];
    int* ptr = a;
    printf("Enter Numbers:- ");
    scanf("%d",ptr);
    printf("The Value At a[0] %d\n", *ptr);
    ptr++;
    printf("Enter Numbers:- ");
    scanf("%d",ptr);
    printf("The Value At a[1] %d\n", *ptr);
    ptr++;
    printf("Enter Numbers:- ");
    scanf("%d",ptr);
    printf("The Value At a[2] %d\n", *ptr);


}