//WAP To Arrange 10 Number In Ascending Order..
/*#include <stdio.h>
int main(){
    int Num[10];
    int temp = 0;
    printf("Enter Number To Arrange It On Ascending Order");
    for(int i = 0; i < 10; i++){
        scanf("%d", &Num[i]);
    }
    printf("\n");
    printf("Before Sorting:");
    for(int i = 0; i < 10; i++){
        printf("%d \t", Num[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(Num[i] > Num[j]){
              temp = Num[i];
              Num[i] = Num[j];
              Num[j] = temp;
           }
        }
    } 
    printf("\n");
    printf("After Sorting:"); 
    for(int i = 0; i < 9; i++){
        printf("%d ", Num[i]);
    }

}
    */
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
int main(){
    int Num[10];
    int temp = 0;
   // printf("Enter Number To Arrange It On Ascending Order\n");
   printf("\n");
    printf("Before Sorting:");
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        Num[i] = rand() % 100 + 1;
        printf(" %d \t", Num[i]);
        //scanf("%d", &Num[i]);
    }
    /*printf("\n");
    printf("Before Sorting:");
    for(int i = 0; i < 10; i++){

        printf("%d \t", Num[i]);
    }*/

    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(Num[i] > Num[j]){
              temp = Num[i];
              Num[i] = Num[j];
              Num[j] = temp;
           }
        }
    } 
    printf("\n");
    printf("After Sorting:"); 
    for(int i = 0; i < 10; i++){
        printf(" %d \t", Num[i]);
    }

}
    
