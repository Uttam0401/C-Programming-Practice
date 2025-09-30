#include<stdio.h>
#include<conio.h>

int main(){
    int a[10],i;
    
    printf("Enter 10 elements :\n");
    for(i=1; i<=10; i++){
        scanf("%d",&a[i]);

    }
    printf("Specific elements are\n");
    for(i=3; i<10; i=i+3){
        printf("%d\t",a[i]);
    }
    return 0;
}