//Merge two arrays into a single array.

#include <stdio.h>
int main(){
    int FirstArr[5];
    int SecondArr[5];
    int TotalArr[10];
    for(int i = 0; i < 5; i++){
        printf("Please Enter Elements Of First Arrays:-  ");
        scanf("%d",&FirstArr[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Please Enter Elements Of Second Arrays:-  ");
        scanf("%d",&SecondArr[i]);
    }

    printf("\n");
    printf("The Arrays Elements Of First Array\n-----------------------------------\n");
    for(int i = 0; i < 5; i++){
        printf("%d\t",FirstArr[i]);
    }

    printf("\n");
    printf("The Arrays Elements Of Second Array\n-----------------------------------\n");
    for(int i = 0; i < 5; i++){
        printf("%d\t",SecondArr[i]);
    }

    printf("\n");
    printf("After Merging Two Arrays In Single Arrays\n--------------------------------\n");
    for(int i = 0; i < 5; i++){
        TotalArr[i] = FirstArr[i];
    }

    for(int i = 0; i < 5; i++){
        TotalArr[i+5] = SecondArr[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%d\t",TotalArr[i]);
    }
}