//Program To Enter 10 Names In An Array And Display Them..
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char Name[10][50];
    char* value;
    for(int i=0; i<10; i++)
    {
        printf("\nEnter the name:-");
        fgets(Name[i],sizeof(Name[i]),stdin);
        value = strtok(Name[i],"\n");
     }
     printf("\nThe Names Are Given Below:\n----------------------------------------------------------------");
     for(int i=0; i<10;i++)
     {
        printf("\n %s",Name[i]);
     } 

}