//ERROR MESSAGE IN SALARY 
#include<stdio.h>
int main(){
    int Salary;
    printf("Plz Enter Salary To Check Its Is Acceptable Or Not:- ");
    scanf("%d",&Salary);
    if(Salary < 0 || Salary > 1000000){
        printf("Wrong Salary! \nSalary Should be between 0 and 1000000");
    }
    else{
        printf("Your Salary Are Acceptable! \n Your Salary Are %d ",Salary);
    }
}