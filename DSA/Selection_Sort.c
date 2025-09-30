//Selection Sort.
#include<stdio.h>
int main(){
    int Num,i,j,First,Second,temp;
    printf("Please Enter The Size Of The Arrays:- ");
    scanf("%d",&Num);
    int Arr[Num];
    printf("Please Enter The Arrays Input:- ");
    for(int i=0;i<Num;i++){
        scanf("%d",&Arr[i]);
    }

    for(i= 0;i<Num-1;i++){
        First = Arr[i];
        Second = Arr[i+1];
        for(j=i+15;j<Num;j++){
            if(First > Arr[j]){
                First = Arr[j];
                Second = j;
        }
    }
    if(Arr[Second] < Arr[i]){
        temp = Arr[Second];
        Arr[Second] = Arr[i];
        Arr[i] = temp;
    }
    
}
 printf("\nSorted Result:\n");
    for(i=0; i<Num; i++){
        printf("%d ", Arr[i]);
    }
}
