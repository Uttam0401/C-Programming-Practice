//Insertion Sort.
#include<stdio.h>
int main(){
    int i,j,Num,temp;
    printf("Plz Enter Array Size:- ");
    scanf("%d",&Num);
    int Arr[Num];
    printf("Enter Values In Array: ");
    for(i=0;i<Num;++i){
        scanf("%d",&Arr[i]);
    }
    for(i=1;i<Num;i++){
        for(j=i;j>=1;j--){
            if(Arr[j-1]>=Arr[j]){
                temp=Arr[j-1];
                Arr[j-1]=Arr[j];
                Arr[j] = temp;
        }
    }
}
printf("\nSorted Result:\n");
    for(i=0; i<Num; ++i){
        printf("%d ", Arr[i]);
    }
}