/*#include<stdio.h>
#include<conio.h>
 int main(){
    int num[5][3];
    int* ptr;
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Enter Marks Of Students %d of subject %d",i+1,j+1);
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }
    ptr = num[0];
    for(int i=0; i<5; i++){
        for(int j=0; j<3;j++,ptr++){
            printf("%d\t",*ptr);
        }
        printf("\n");
    }
 }*/

 #include<stdio.h>
 #include<conio.h>
 int main(){
    int Num[5][3];
    int total[5];
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Marks of Students %d of subject %d ",i+1,j+1);
            scanf("%d",&Num[i][j]);
        }
        printf("\n");

 }
 for(int i=0; i<5; i++){
    for(int j=0; j<3;j++ ){
   total =+ Num[j];
    }
    
 }
 printf("\n");
 printf("Total %d",total);
 }