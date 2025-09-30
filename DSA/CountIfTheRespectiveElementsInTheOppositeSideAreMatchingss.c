//CountIfTheRespectiveElementsInTheOppositeSideAreMatchings
#include<stdio.h>
int main(){
    int Arr[5];
    int Count = 0;
    for(int i=0;i<5;i++)
    {
        printf("\nPlz Enter Arrays Element:- ");
        scanf("%d",&Arr[i]);
    }
    printf("The Arrays Elements Are:- ");
    for(int i=0;i<5;i++){
        printf("%d\t",Arr[i]);
    }
    for(int i=0;i<5/2;i++){
       if( Arr[i] == Arr[4-i]){
        Count++;
       }
    }
    printf("\n");
    printf("The Matching Element In Given Arrays Are:- ");
    printf("\n%d\n", Count);
}

