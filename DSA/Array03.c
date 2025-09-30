#include<stdio.h>
int main()
{
    int Arr[5];
    for (int i = 1; i <=5; i++){
        printf("Please enter Number:-%d ",i);
        scanf("%d", &Arr[i]);
    }
    printf("\n");
    printf("Display The Data Of All Elements\n");
    for (int i = 1; i < =5; i++){
        printf("%d\t ",Arr[i]);
    }
}