//Write A Program To Accept A Number only If It Is A Three Digits Numbers.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>

void main(){
    int Num = 0;
    int Count = 0;
    int temp = 0;
    while(true){
        Count = 0;
        system("cls");
        printf("Please Enter Any Numbers:- ");
        scanf("%d",&Num);
        temp = Num;
        do{
            Count++;
            Num /= 10;
        }
        while(Num != 0);
        if(Count != 3){
            printf("Sorry!!! \nYour Number Is Not Accepted.\nPlease Try Again!!!..");
            getch();
            continue;
        }
        else{
            printf("Congratulations!!!!\nYour Number Is %d Is Accepted.", temp);
            break;
        }
    }
}