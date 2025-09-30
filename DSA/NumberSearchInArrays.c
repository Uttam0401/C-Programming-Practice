/*Write a Java program that takes an array of integers and a specific 
number as input. The program should count how many times the 
specific number occurs in the array and display the result.
 Requirements:
 1.The program should prompt the user to enter the size of the array.
 2.The program should allow the user to input the elements of the 
array.
 3.The program should then prompt the user to enter a number to 
search in the array.
 4.The program should count how many times the entered number 
occurs in the array and display the count.
*/
#include<stdio.h>
int main(){
    int size;
    int count = 0;
    int SearchElement;
    printf("Plz Enter Arrays Size:- ");
    scanf("%d",&size);
    int Arr[size];
    for(int i=0; i<size; i++){
        printf("Plz Enter Array Element:- ");
        scanf("%d",&Arr[i]);
    }
    printf("\n");
    printf("Plz Enter The Number To Search In Arrays:-");
    scanf("%d",&SearchElement);
    printf("\n");

    printf("The Arrays Elements Are Given Below:\n--------------------------------\n");
    for(int i=0; i<size; i++){
        printf("%d\t",Arr[i]);
    }

    for(int i = 0; i<size;i++){
        if(Arr[i] == SearchElement){
            count++;
        
        }
    }
    printf("\n\nCount = %d",count);

}