WAP to print the numbers lines to print "*"

#include<stdio.h>
int main()
{
    int Num1,i,j;
    printf("Enter The Numbers Of Lines To Print:- ""*");
    scanf("%d",&Num1);
    for(i=0;i<Num1;i++){
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
    printf("\n");

}