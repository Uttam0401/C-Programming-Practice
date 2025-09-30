#include<stdio.h>
int main()
{
    int i,a=2;
    float n;
    printf("enter a number to print odd and even number\n");
    scanf("%f",&n);
    n=n/2;
    printf("even numer = \n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a=a+2;
    }
    a=1;
    n=n+0.5;
    printf("odd number = \n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a=a+2;

    }
    return 0;
}