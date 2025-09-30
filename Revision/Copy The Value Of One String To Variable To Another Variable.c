//One String To Another String
#include<stdio.h>
#include<string.h>
int main(){
    char Name[50];
    char Name2[50];
    //char temp[50];
    char* value;
    printf("Please Enter Your Name: ");
    fgets(Name, sizeof(Name),stdin);
    value = strtok(Name, "\n");
   // printf("Before Copying:\n%s\n %s", Name,Name2);
    strcpy(Name2,Name);
    printf("After Copying:\n%s\n %s", Name,Name2);
}