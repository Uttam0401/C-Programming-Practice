//Write A Program To Print The Table Of 5.
#include<stdio.h>
int main(){
    int Num,i;
    printf("Please Enter Any Number To Print Table:- ");
    scanf("%d",&Num);
    for(i=1;i<=10;i++){
        printf("%d * %d =  %d\n",Num,i,Num*i);
    }
}