//Write a program in c to print 1 to 10 using do while

#include<stdio.h>
void main(){
    int Num = 10,i;
    do{
        for(i=1;i<=Num;i++){
            printf("%d\n",i);
        }
    }
    while(i<Num);
}