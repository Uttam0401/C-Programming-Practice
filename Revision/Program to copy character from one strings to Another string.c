//Program to copy character from one strings to Another string|...
#include<stdio.h>
#include<string.h>
#include<ctype.h>
  void main(){
    char Name1[50];
    char Name2[50];
    char* value;
printf("Please Enter Your Name:- ");
fgets(Name1,sizeof(Name1),stdin);
value = strtok(Name1,"\n");
strncpy(Name2,Name1,5);
Name2[5] = '\0';
printf("The Value Of Source Is %s\nThe Value Of Destination Is %s\n",Name1,Name2);
  }