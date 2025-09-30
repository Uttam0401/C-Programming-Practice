//Write A Program In C To Print The Sum Of Two Number Using Continue...

#include<stdio.h>
int main(){
    int Num1,Num2,Sum;
    for(;;){
    
    
    printf("\nEnter The Value Of First Numbers:- ");
    scanf("%d",&Num1);
    if(Num1 >=100){
        printf("Your First Number Is Not More Than 100\nPlease Enter First Number Again!!!");
        continue;
    
    }
    printf("Enter The Value Of Second Numbers:- ");
    scanf("%d",&Num2);
    if(Num2 >= 100){
        printf("Your Second Number Is Not More Than 100\nPlease Enter Second Number Again!!!");
        continue;
    }
    Sum = Num1 + Num2;
    printf("\nThe Sum Of The Given Numbers = %d",Sum);
    if(Sum > 100){
        break;
    }
   

}
}