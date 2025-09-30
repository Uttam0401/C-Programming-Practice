#include <stdio.h>

int main()
{
    int c, Cplusplus, java, python, csharp;
    int total;
    float average;
    printf("Enter marks of c :");
    scanf("%d", &c);

    printf("Enter marks of C++ :");
    scanf("%d", &Cplusplus);

    printf("Enter marks of java :");
    scanf("%d", &java);

    printf("Enter marks of python :");
    scanf("%d", &python);

    printf("Enter marks of C#:");
    scanf("%d", &csharp);

    total = c + Cplusplus + java + python + csharp;
    printf("TOTAL :%d", total);

    average = (float)total / 5;
    printf("\nAverage :%.2f", average);

    if (c <= 30 || Cplusplus <= 30 || java <= 30 || python <= 30 || csharp <= 30)
    {
        printf("\nResult : Fail");
    }
    else if (average >= 60.00)
    {
        printf("\n Result : First Division");
    }
    else if (average >= 45.00)
    {
        printf("\n Result : Second Division");
    }
    else if (average >= 30.00)
    {
        printf("\n Result : Third Division");
    }
    else 
    {
        printf("\n Result : Fail");
    }

}