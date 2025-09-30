#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];//50
    int age;//4
    float height;//4 - 58 bytes
};

void main() {
    // Declare a struct variable
    struct Person person1;
    struct Person person2;

    // Access and assign values to the members
    printf("Enter the name  ");
    fgets(person1.name,sizeof(person1.name), stdin);
    printf("Enter the age  ");
    scanf("%d",&person1.age);
    printf("Enter the height  ");
    scanf("%f",&person1.height);
    
    // Print the values
    printf("\nName: %s", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);
    printf("\n");

    printf("Enter the name  ");
    fgets(person2.name,sizeof(person2.name), stdin\n);22
    printf("Enter the age  ");
    scanf("%d",&person2.age);
    printf("Enter the height  ");
    scanf("%f",&person2.height);
    
    // Print the values
    printf("\nName: %s", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.2f\n", person2.height);
}