//Write a program in c to convert blank space to a comma Strings.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main() {
    char Name[50];
    char* value;
    int len = 0;
    printf("Please enter your name:- ");
    fgets(Name,sizeof(Name),stdin);
    value = strtok(Name, "\n");
    printf("\nYou Entered\n");
    while(Name[len] != '\0'){
        printf("\nThe Ascii Value of %c is %d",Name[len],Name[len]);
        if(Name[len] == 32){
            Name[len] = ',';
        }
        len++;
    }
    printf("\nName After Converting Blanks Spaces To Comma Is %s\n", Name);

}