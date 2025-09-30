/* Write a Java program to check whether all elements in a given array 
are unique. An array is considered to have unique elements if no 
two elements in the array are the same.
 Input
 1.The user will input the size of the array (e.g., 5).
 2.The user will then input the elements of the array (e.g., 10, 20, 30, 
40, 50).
 Output
 1.If all elements in the array are unique, the program should 
display:
 "All elements are unique."
 2.If any duplicate elements are found, the program should display:
 "Array contains duplicate elements."
*/
#include<stdio.h>
int main(){
    int Size;
    int IsUnique=0;
    printf("Please Enter The Length Of The Array:- ");
    scanf("%d",&Size);
    int Arr[Size];
    for(int i=0; i<Size; i++){
        printf("Plz Enter Array Element:- ");
        scanf("%d",&Arr[i]);
    }
    printf("\n");
    printf("Display The Array Elements:\n");
    for(int i=0; i<Size; i++){
        printf("%d\t",Arr[i]);
    }

    for(int i=0; i<Size-1; i++){
        for(int j=i+1; j<Size; j++){
        if(Arr[0] == Arr[j]){
            IsUnique++;
            break;
            }

    }
    }

    if(IsUnique == 0){
        printf("\nAll Elements Are Unique.");
    }
    else{
        printf("\nArrays Contains Duplicates Elements.");
    }
}


