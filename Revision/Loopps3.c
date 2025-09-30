//False Statements.
#include<stdio.h>
void main(){
    int a =1;
    for(;false;){
        printf("%d",a);
        a-=2;
    }
    printf("\n I am out of loops");

}