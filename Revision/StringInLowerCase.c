//Print The Length Of The Name And The Name Character By convert character in lowercase.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

 void main(){
    char Name[50];
    char* value;
    int length = 0;
    int i = 0;
    printf("Please enter your name:- ");
    fgets(Name, sizeof(Name),stdin);
    value = strtok(Name, "\n");
    while(Name[length] != '\0'){
        printf("%c",tolower(Name[length]));
        length++;
    }

    printf("\nLength Of Your Name: %d\n",length);
 }