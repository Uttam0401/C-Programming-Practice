#include<stdio.h>
#include<string.h>

 struct Doctor{
    char Name[50];
    char Address[50];
    int Mobile;
    char EmailId[50];
    char Specialization[50];
    float Salary;
};

//Assigning The Values.
void main()
{

    struct Doctor doctor1;

    printf("Enter The Name Of The Doctor:-");
    fgets(doctor1.Name,sizeof(doctor1.Name),stdin);
    printf("Enter The Address Of The Doctor:-");
    fgets(doctor1.Address,sizeof(doctor1.Address),stdin);
    printf("Enter The Phone Number Of Doctor:-");
    scanf("%d",&doctor1.Mobile);
    printf("Enter The E-Mail ID Of Doctor:-");
    fgets(doctor1.EmailId,sizeof(doctor1.EmailId),stdin);
    printf("\n");
    printf("Enter The Specialization Of Doctor:-");
    fgets(doctor1.Specialization,sizeof(doctor1.Specialization),stdin);
    printf("Enter The Salary Of Doctor:-");
    scanf("%f",&doctor1.Salary);

    //Printing The Values.

    printf("Name: %s",doctor1.Name);
    printf("Address: %s",doctor1.Address);
    printf("Mobile No. : %d",doctor1.Mobile);
    printf("E-Mail ID: %s",doctor1.EmailId);
    printf("Specialization: %s",doctor1.Specialization);
    printf("Salary: %.2f",doctor1.Salary);
}