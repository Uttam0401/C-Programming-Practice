//Write A Program In C To Develop a Calculator.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(){
    int Num1 = 0, Num2 = 0, Result = 0,Choices = 0;
    do{
        system("cls");
        for(int i = 1; i <= 15; i++){
            printf("%c", 176);
        }
        printf("\nCalculator\n");
        for(int i = 1; i <= 15; i++){
            printf("%c",176);
        }
        printf("\n");
        for(int i = 1; i <= 15; i++){
            printf("%c",174);
        }
        printf("\n\nWhat Would You Like To Do Today?\n");
        for(int i = 1; i <= 15; i++){
            printf("%c",174);
        }
        printf("\n\n1. Add \n2. Subtract \n3. Multiplication \n4. Divide \n5. Exit \n6. Please Enter Your Choice[1-5]\n");
        scanf("%d",&Choices);

        switch(Choices){
            case 1:{
                printf("Enter First Numbers:- ");
                scanf("%d",&Num1);
                printf("Enter Second Numbers:- ");
                scanf("%d",&Num2);
                Result = Num1 + Num2;
                printf("\nThe Sum  is %d ",Result);
                break;
            }
            case 2:{
                printf("Enter First Numbers:- ");
                scanf("%d",&Num1);
                printf("Enter Second Numbers:- ");
                scanf("%d",&Num2);
                Result = Num1 - Num2;
                printf("\nThe Subtraction Is %d ",Result);
                break;
            }
            case 3:{
                printf("Enter First Numbers:- ");
                scanf("%d",&Num1);
                printf("Enter Second Numbers:- ");
                scanf("%d",&Num2);
                Result = Num1 * Num2;
                printf("\nThe Product Is %d ",Result);
                break;
            }
            case 4:{
                printf("Enter First Numbers:- ");
                scanf("%d",&Num1);
                printf("Enter Second Numbers:- ");
                scanf("%d",&Num2);
                Result = Num1 / Num2;
                printf("\n %d Divided By %d  =  %d ",Num1,Num2,Result);
                break;
            }
            case 5:{
                printf("\nThanks For Using Our Calculator!\n!!!");
                break;
            }
            default:{
                printf("\nInvalid Choice!\nPlease Try Again!!!\n");
            }
            
        }
        getch();

    }
    while(Choices!=5);
}