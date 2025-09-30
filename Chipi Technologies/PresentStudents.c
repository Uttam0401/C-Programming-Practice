//Write a program in c to find the percentage of students present in The ClassRoom.

#include<stdio.h>
#include<conio.h>
  int main()
  {
    int TotalStudent,PresentStudents;
    printf("\nTotal students  in The Class Room ... ");
    scanf("%d",&TotalStudent);
    printf("Enter present students in the Class Room ... ");
    scanf("%d",&PresentStudents);
    if(PresentStudents >(TotalStudent*.2))
    {
        printf("We Are Starting The Class....");
    }
    else{
        printf("We Are waiting for the Class atleast 10 Minutes ... ");
    }
    return 0;

  }