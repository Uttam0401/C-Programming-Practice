//Calloc Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
void main(){
    int Size;
    printf("Enter The Size Of The Arrays:- ");
    scanf("%d",&Size);

    int* Arr=(int*)calloc(Size, Size*sizeof(int));
    if(Arr==NULL){
        printf("Memory Allocation Failed");
        return;
    }

    for(int i=0; i<Size; i++){
        printf("The Value Of Arr[%d] is %d\n",i+1,Arr[i]);
    }
    free(Arr);
    return;
}