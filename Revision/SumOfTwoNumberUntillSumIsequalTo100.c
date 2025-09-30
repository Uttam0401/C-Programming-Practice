//write a program to print the sum of two number until the sum is equal to hundred then stop.

#include<stdio.h>
int main(){
    int Num1,Num2,Sum;
    for(;;){
    
    
    printf("\nEnter The Value Of First Numbers:- ");
    scanf("%d",&Num1);
    if(Num1 >=100){
        printf("Your First Number Is Not More Than 100\n\n");
        continue;
    
    }
    printf("Enter The Value Of Second Numbers:- ");
    scanf("%d",&Num2);
    if(Num2 >= 100){
        printf("Your Second Number Is Not More Than 100\n\n");
        continue;
    }
    Sum = Num1 + Num2;
    printf("\n The Sum Of The Given Numbers = %d",Sum);
    if(Sum > 100){
        break;
    }
   

}
}
/*
#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int Num1,Num2,Sum=0;
    for(;Sum<=100;){
        
       system("cls");
        printf("Enter The Value Of First Numbers:- ");
        scanf("%d",&Num1);
        printf("Enter The Value Of Second Numbers:- ");
        scanf("%d",&Num2);
        Sum = Num1 + Num2;
    
        printf("The Sum Of The Given Numbers Are = %d\n",Sum);
                                                                                                                                                 getch();
        if(Sum <=100){
            continue;
        }
}
}*/
