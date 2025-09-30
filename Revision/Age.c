//Write a program to classifies a person age like infant,child, teenager or senior citizen based on user input.

#include<stdio.h>
int main(){
    int Age;
    printf("Enter The Age Of A Person:- ");
    scanf("%d",&Age);

    if(Age >=0 && Age <=2){
        printf("Infant");
    }
    else if(Age >=3 && Age <= 12){
        printf("Child");
    }
    else if(Age >=13 && Age <=19){
        printf("Teenagers");
    }
    else if(Age >=20 && Age <=64){
        printf("Adult");
    }
    else if(Age >= 65){
        printf("Senior Citizens");
    }
    else{
        printf("Wrong Input");
    }
    printf("\n");
    printf("The Age Is %d",Age);
}