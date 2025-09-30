//Write a program to add two strings and print them as a single word. Please use ” ” (Blank space) as a separator.
#include<stdio.h>
#include<conio.h>
#include<string.h>
   int main()
   {
    char s1[100],s2[100];
    printf("Enter First name");
    scanf("%c",&s1);
    printf("Enter The name:-");
    scanf("%c",&s2);
    strcat(s1,s2);
    printf("Addition Of Two String is=%s",s1);
    return 0;
   }