/* Write a c program to accept an array of integers from the user 
and replace all negative numbers in the array with 0. After replacing 
the negative numbers, display the modified array. 
Requirements:
 1.Input:
 •Accept the size of the array (integer).
 •Accept the elements of the array (integers, which may include 
positive and negative values).
 2.Process:
 •Traverse the array and check each element.
 •If an element is negative, replace it with 0.
 3.Output:
 •Display the modified array with all negative numbers replaced 
by 0.
*/
#include<stdio.h>
int main(){
    int size;
        printf("Plz Enter Array Length: ");
        scanf("%d",&size);

        int Arr[size];
        for(int i=0;i<size;i++){
            printf("Plz Enter Arrays Elements:- ");
            scanf("%d",&Arr[i]);
        }
        printf("\n");
        printf("Before The Traversing The Array Element Are Given Below:\n--------------------------------\n ");

        for(int i=0;i<size;i++){
            printf("%d\t",Arr[i]);
        }

        printf("\n");
        for(int i=0; i<size;i++){
            if(Arr[i] <= 0){
                Arr[i] = 0;
            }
        }

        printf("\n");
        printf("After The Traversing The Array Elements Are Given Below:\n--------------------------------\n ");
        for(int i = 0; i < size; i++){
            printf("%d\t",Arr[i]);
        }
          
          return 0;
            }

