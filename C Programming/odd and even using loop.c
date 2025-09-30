#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number to print odd and even number\n");
    scanf("%d",&n);
    printf("even numer = \n");
    for(i=2;i<=n;i+=2)
    {
        printf("%d\n",i);
    }
    printf("odd number = \n");
    for(i=1;i<=n;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}