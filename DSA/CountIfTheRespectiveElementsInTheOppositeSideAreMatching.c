//Accept Data And Print data Of Arrays
// And matches their values

#include <stdio.h>
int main(){
    int Arr[10];
    int Count = 0;
    for(int i=0; i<10; i++) {
        printf("Please Enter Arrays Elements:- ");
        scanf("%d",&Arr[i]);
    }
    printf("\n");
    printf("The Arrays Elements Are:- ");
    for(int i=0; i<10; i++) {
        printf("%d\t ",Arr[i]);
            }

    for (int i = 0; i < 5; i++) { 
        if (Arr[i] == Arr[9 - i]) { 
            Count++; 
        }
         }
    printf("\n");
    printf("The Matching Element In Given Arrays Are:- ");
    printf("\n%d\n", Count);
}