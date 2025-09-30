//Program To Swap The Values Of Two Strings...
#include<stdio.h>
#include<string.h>
int main(){
    char Name[50];
    char Name2[50];
    char temp[50];
    char* value;
    printf("Please Enter Your Name: ");
    fgets(Name, sizeof(Name),stdin);
    value = strtok(Name, "\n");

    printf("Please Enter Your Name: ");
    fgets(Name2, sizeof(Name2),stdin);
    value = strtok(Name2, "\n");

    printf("\nBefore Swapping\n The Value Of First Variable Is %s\n The Value Of Second Variable Is %s\n",Name,Name2);

    strcpy(temp,Name);
    strcpy(Name,Name2);
    strcpy(Name2,temp);

    printf("\nAfter Swapping\n The Value Of First Variable Is %s\n The Value Of Second Variable Is %s\n",Name,Name2);


}
