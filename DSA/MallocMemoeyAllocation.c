//Malloc Memory Allocation..

#include<stdio.h>
#include<stdlib.h>
void main(){
    int Size;
    printf("Enter The Size Of The Arrays:- ");
    scanf("%d",&Size);

    int* Arr= (int*) malloc(Size*sizeof(int));

    if(Arr==NULL){
        printf("Memory Allocation Failed");
        return;
    }
    for(int i=0; i<Size; i++){
        printf("The Value Of Arr[%d] is %d\n",i,Arr[i]);
    }

free(Arr);
return;
}