//write a program in c to accept the range of the Salary.

#include<stdio.h>
#include<conio.h>
int main()
{
    int Salary;
    printf("Enter The Salary:-");
    scanf("%d", &Salary);
    if(Salary < 0 || Salary >100000)
    {
        printf("Your Salary must be between 0 and 1000000");
    }
    else{
        printf("Your Salary Is Accepted");
    }
    return 0;
}