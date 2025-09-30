//HOW TO AVOID INFINITE LOOPS HANDLE INFINITE LOOPS.
#include <stdio.h>
void main(){
    int a = 1;  
    for(;;){
        printf("%d", a);
        a-=2;
    }
}