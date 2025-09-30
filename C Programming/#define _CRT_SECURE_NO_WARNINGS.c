#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
//Enter 10 Numbers in an array and print all of them
void main()
{
    srand(time(NULL));
    const int numberOfStudents = 10;
    const int numberOfSubjects = 5;
    const int total;
    int marks[numberOfStudents][numberOfSubjects];//Two dimensional array
    
    for (int i = 0; i < numberOfStudents; i++)
    {
        for (int j = 0; j < numberOfSubjects; j++)
        {
            marks[i][j] = rand() % 90 + 10;
        }
    }
    printf("Mark1\tMark2\tMark3\tMark4\tMark5\tTotal\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        for (int j = 0; j < numberOfSubjects; j++)
        {
            printf("Mark1+Mark2+Mark3+Mark4+Mark5=%d");
            printf("\n");
            
        }
        printf("%d", total);
        printf("\n");
    }
}