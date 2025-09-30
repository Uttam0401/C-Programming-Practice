//Accept Input Via Random Number Generator (RNG).
/*
 #include<stdio.h>
#include<stdlib.h>
#include<time.h>
   int main(){
   int Num[10][5];
   int i;
   int j;
   printf("Accept Input Via Random Number Generator (RNG).\n");
   srand(time(NULL));
   /*for(i=0; i<10; i++){
    for(j=0; j<5; j++){
        Num[i][j] = rand() % 50 + 1;
        scanf("%d ",&Num[i][j]);
    }
    printf("\n");
   }*/
   /*
   printf("Printing The Numbers:\n");
   for(i=0; i<10; i++){
    for(j=0; j<5; j++){
        Num[i][j] = rand() % 50 + 1;
    
        printf("%d ",Num[i][j]);
    }
    printf("\n");
   }

   */

   #include<stdio.h>
   #include<stdlib.h>
   #include<time.h>
     void main(){
        srand(time(NULL));
        int marks[10][5]; //Two Dimensional Array
        for(int i=0; i <=9; i++){
            for(int j=0; j <=4; j++){
                marks[i][j] = rand() % 90 + 10;
            }
        }
        //Print The Marks Of Each Students.
        for(int i=0; i < 10; i++){
            for(int j=0; j <=4; j++){
                printf("%d ", marks[i][j]);
            }
            printf("\n");
        }
     }