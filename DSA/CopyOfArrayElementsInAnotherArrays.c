//Create A Copy Of An Arrays.
//Program to add age in years of 10 students of a school
//Create A Copy Of An Arrays.
/*#include<stdio.h>
int main(){
    int Age[10];
    int CloneAge[10];
    for(int i=0; i<10; i++){
        printf("Please Enter Ages Of Students.");
        scanf("%d",&Age[i]);
    }
    printf("\n");
    printf("Age Of Students Are Given Below:\n--------------------------------\n");
    for(int i=0; i<10; i++){
        printf("%d\t",Age[i]);
    }
    for(int i=0; i<10; i++){
        CloneAge[i] = Age[i];
    }

    printf("\n");
    printf("Aged Of Copy Students Are :\n--------------------------------\n");
    for(int i=0; i<10; i++){
        printf("%d\t",CloneAge[i]);
    }


}*/

#include<stdio.h>
int main(){
    int Age[10];
    int CloneAge[10];
    for(int i=0; i<sizeof(Age)/sizeof(int); i++){
        printf("Please Enter Ages Of Students.");
        scanf("%d",&Age[i]);
    }
    printf("\n");
    printf("Age Of Students Are Given Below:\n--------------------------------\n");
    for(int i=0; i<sizeof(Age)/sizeof(int); i++){
        printf("%d\t",Age[i]);
    }
    for(int i=0; i<sizeof(Age)/sizeof(int); i++){
        CloneAge[i] = Age[i];
    }

    printf("\n");
    printf("Aged Of Copy Students Are :\n--------------------------------\n");
    for(int i=0; i<sizeof(Age)/sizeof(int); i++){
        printf("%d\t",CloneAge[i]);
    }


}