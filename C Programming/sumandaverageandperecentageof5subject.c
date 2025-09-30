//WAP to enter the marks of five subjects and print print the total Average and percentage assume that each. 100 is the highest marks of each subject.

#include<stdio.h>
#include<conio.h>
int main()
{
    float physics,maths,chemistry,hindi,english,avg,percentage,sum;
    printf("enter the marks of physics :");
    scanf("%f",&physics);
    printf("enter the marks of maths :");
    scanf("%f",&maths);
    printf("enter the marks of chemistry :");
    scanf("%f",&chemistry);
    printf("enter the marks of hindi :");
    scanf("%f",&hindi);
    printf("enter the marks of english :");
    scanf("%f",&english);
    sum=physics+maths+chemistry+hindi+english;
    printf("the total sum of the number=%2f",sum);
    avg=sum/5;
    printf("the total average of given number=%2f",avg);
    percentage=sum/500*100;
    printf("percentage of the given number=%2f",percentage);
    getch();
}


