//WAP To Arrange 10 Number In Ascending Order..
#include<stdio.h>
#include<conio.h>
void main() {
    int Number[10];
    int temp = 0;
for (int i = 0; i <=9; i++){
    printf("Please Enter Your Number %d:- ",i);
    scanf("%d",&Number[i]);
}
printf("\n");
printf("Before Sorting\n");
for (int i = 0; i <= 9; i++){
    printf("%d\t",Number[i]);
}
for(int i =0 ; i < 9; i++){
    for(int j = i+1; j <=9; j++){
        if(Number[i] > Number[j]){
            temp = Number[i];
            Number[i] = Number[j];
            Number[j] = temp;
        }
    }
}
printf("\nAfter Sorting\n");
for(int i=0;i<=9;i++){
    printf("%d\t",Number[i]);
}
}