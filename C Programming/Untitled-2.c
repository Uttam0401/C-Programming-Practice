//Write a program to enter two name and check if both the names are same or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    char name1[20],name[20];
    printf("Enter The First Name:-");
    scanf("%c",&name1);
    printf("Enter The Last Name:-");
    scanf("%c",&name);
      
      if (name1==name)
      {
        printf("Both The Names Are Same");
    
      }
      else
      {
        printf("Both The Name Are Not Same");

      }
      return 0; 
}