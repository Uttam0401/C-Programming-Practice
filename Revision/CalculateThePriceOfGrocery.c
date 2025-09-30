#include<stdio.h>
#include<conio.h>
void main(){
    int TotalPrice1=0,TotalPrice2=0,GrossPrice=0,Quantity1,Quantity2,Rate1,Rate2;
    char Items1,Items2;
    printf("****************Grocery Bills****************");
    printf("\nEnter The Name Of Items 1:-");
    scanf("%s",&Items1);
    printf("\n");
    printf("Enter The Name Of Items 2:-");
    scanf("%s",&Items2);
    printf("\n");
    printf("Enter The Quantity Of Items1:-");
    scanf("%d",&Quantity1);
    printf("Enter The Quantity Of Items2:-");
    scanf("%d",&Quantity2);
    printf("Enter The Rate of Items1:-");
    scanf("%d",&Rate1);
    printf("Enter The Rate Of Items2:-");
    scanf("%d",&Rate2);
    TotalPrice1 = Quantity1*Rate1;
    TotalPrice2 = Quantity2*Rate2;
    GrossPrice = TotalPrice1+TotalPrice2;
    printf("\n");
    printf("%d\t%d\t%d\t%d\t",GrossPrice,TotalPrice1,TotalPrice2);
    


}