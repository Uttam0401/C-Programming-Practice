//print the value of i until the i are not divided by 10
#include <stdio.h>
int main(){
    for(int i=1; i<100; i++){
        if(i%10==0){
            break;
        }
        printf("%d ", i);
    }
}