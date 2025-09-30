/* Write a program to calculate the product of all elements in a single
dimensional array. The array will contain integer values. The program 
should allow the user to input the size of the array and its elements. 
Then, it should compute and display the product of all elements in 
the array.
 Enter the number of elements in the array: 5
 Enter the elements of the array:
 2 3 4 5 6
 The product of all elements in the array is: 720
*/

#include<stdio.h>
int main(){
    int size;
    int product = 1;
    printf("Plz Enter The Arrays Length:- ");
    scanf("%d",&size);
    int Arr[size];

    for(int i=0; i<size; i++){
        printf("Plz Enter Array Element:- ");
        scanf("%d",&Arr[i]);
    }
    printf("\n");
    printf("The Arrays Elements Are Given Below:\n-----------------------------------\n");
    for(int i=0; i<size; i++){
        printf("%d\t ",Arr[i]);
    }

    printf("\n");
    printf("The Products Of Given Arrays Elements Are:\n-----------------------------------\n");

    for(int i=0; i<size; i++){
        product *= Arr[i];
    }

    printf("\n");
    printf("%d",product);

}