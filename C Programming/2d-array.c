#include<stdio.h>

int main()
{
    int a[2][2],i,j;
    printf("enter the number = \n");
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    scanf("%d",&a[i][j]);
    }
    }
   for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    printf(" %d\n",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}