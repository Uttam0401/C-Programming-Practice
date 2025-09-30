//Write A Program To Enter Three Number And Arrange Them In Ascending Order.

#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1, Num2, Num3;
    printf("Enter First Number:-");
    scanf("%d",&Num1);
    printf("Enter Second Number:-");
    scanf("%d",&Num2);
    printf("Enter Third Number:-");
    scanf("%d",&Num3);

    if (Num1 >= Num2 && Num1 >= Num3)
    {
        if (Num2 >=Num3)
        {
            printf("\n Number In Ascending Order %d %d %d\n", Num3, Num2, Num1);
        }
        else
        {

        }
          printf("%d First Number Is Largest Number\n", Num1);
    }
    else if (Num2 >= Num3 && Num2 >= Num1)
    {
        if (Num3 >= Num1)
        {
            printf("\n Number In Ascending Order %d %d %d",Num3, Num1, Num2);
        }
        else
        {

        }
        printf("%d Second Number Is Largest Number\n",Num2);
    }
    else
    {
        if (Num1 >= Num2)
        {
            printf("\n Number In Ascending Order %d %d %d",Num1, Num2, Num3);
        }
    }
    printf("The Number In Ascending Order Are %d %d %d ",Num1,Num2,Num3);
    return 0;
}