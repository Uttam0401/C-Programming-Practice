//Write a program to calculate the sum of odd elements.
 #include <stdio.h>
 #include <conio.h>
 int main(){
    int Arr[5];
    int Sum=0,i;

    for(i=0;i<5;i++){
        printf("Enter Arrays Elements: ");
        scanf("%d",&Arr[i]);
    }
    printf("Arrays Elements Are:\n-------------------------------- ");
    printf("\n");

    for(i=0;i<5;i++){
        printf("%d",Arr[i]);
    }
    for(i=0;i<5;i+2){
    if(Arr[i] % 2){
        Sum += Arr[i];

    }
    }
    printf("\n");
    printf("The Sum Of Odd Elements");
    printf("%d",Sum);
 }