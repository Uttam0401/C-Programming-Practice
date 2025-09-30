//Insertion Sort Using C Programming Language.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int Num[10];
    int temp = 0;
    int j = 0;
    srand(time(NULL));
    printf("Before Sorting:\t");
    for(int i = 0; i < 10; i++){
        Num[i] = rand() % 20 + 1;
        printf("%d ", Num[i]);
    }

    printf("\n");
    for(int i = 1; i < 10; i++){
        temp = Num[i];
        j = i-1; // j = 0;
        while(j >= 0 && Num[j] > temp){
            Num[j+1] = Num[j];
            j = j-1;
        }
        Num[j+1] = temp;
    }
    printf("Sorted Array:  ");
    for(int i = 0; i < 10; i++){
        printf("%d ", Num[i]);
    }
    printf("\n");

}