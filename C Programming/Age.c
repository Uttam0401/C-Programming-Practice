//WAP that classifies a person's age like infant,child,teenager,adult or senior citizen based on user input.

#include<stdio.h>
  int main()
  {
    int age;
    printf("Enter age:-");
    scanf("%d", &age);
    if(age == 0 || age <=2)
    {
        printf("Infant");
    }
    else if(age == 3 || age <=12)
    {
        printf("Child");
    }
    else if(age == 13 || age <= 19)
    {
        printf("Teenager");
    }
    else if(age == 20 || age <= 64)
    {
        printf("Adult");
    }
    else if(age >= 65)
    {
        printf("Senior Citizen");
    }
    return 0;
  }