/* Write a Java program that takes an array of integers as input, and 
prints all the elements of the array in reverse order. The program 
should prompt the user to enter the size of the array and its 
elements, and then display the elements in reverse order.
 Requirements:
 1.Accept the size of the array from the user.
 2.Accept the elements of the array.
 3.Print the elements of the array in reverse order (starting from the 
last element to the first).
 Enter the size of the array: 5
 Enter 5 elements:
 Element 1: 10
 Element 2: 20
 Element 3: 30
 Element 4: 40
 Element 5: 50
 Elements of the array in reverse order:
 50 40 30 20 10*/

 #include<stdio.h>
 int main(){
    int size;

printf("Please Enter Array Size:- ");
scanf("%d", &size);

int Arr[size];

for(int i = 0; i < size; i++){
    printf("Please Enter Array Element:- ");
    scanf("%d", &Arr[i]);
}
printf("\n");
printf("Before Reverse The Array Element Are Given Below:\n--------------------------------\n");

for(int i = 0; i < size; i++){
    printf("%d\t", Arr[i]);
}

printf("\n");
printf("After The Reverse The Array Elements Are Given Below:\n-------------------------------\n");

//for(int i = size -1 ; i >= 0; i-- )
for(int i = size-1; i >= 0; i-- ){
    printf("%d\t", Arr[i]);
}
return 0;
 }
