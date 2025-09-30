
#include<stdio.h>
  int main()
  {
    int Num1,i,j;
    printf("Enter the number of lines to print to the screen:- ");
    scanf("%d",&Num1);
    for(i=1;i<Num1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
  }
