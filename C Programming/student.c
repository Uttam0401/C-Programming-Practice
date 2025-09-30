//student.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "common.h"

#define STUDENT_FILE "students.dat"

void addStudent() {
    FILE* file = fopen(STUDENT_FILE, "ab");
    if (!file) {
        perror("Unable to open file for writing");
        return;
    }

    Student student;
    printf("Enter Registration Number: ");
    scanf("%d", &student.regnNumber);
    getchar(); // To consume the newline character left by scanf

    printf("Enter Name: ");
    fgets(student.name, MAX_NAME_LENGTH, stdin);
    student.name[strcspn(student.name, "\n")] = 0; // Remove the trailing newline character

    printf("Enter Father's Name: ");
    fgets(student.fathersName, MAX_NAME_LENGTH, stdin);
    student.fathersName[strcspn(student.fathersName, "\n")] = 0; // Remove the trailing newline character

    printf("Enter Date of Birth (YYYY-MM-DD): ");
    fgets(student.dob, MAX_DATE_LENGTH, stdin);
    student.dob[strcspn(student.dob, "\n")] = 0; // Remove the trailing newline character

    printf("Enter Mobile Number: ");
    fgets(student.mobileNumber, MAX_MOBILE_LENGTH, stdin);
    student.mobileNumber[strcspn(student.mobileNumber, "\n")] = 0; // Remove the trailing newline character

    fwrite(&student, sizeof(Student), 1, file);
    fclose(file);
    printf("Student added successfully!\n");
    pauseScreen();
}

void updateStudent() {
    int regnNumber, found = 0;
    FILE* file = fopen(STUDENT_FILE, "rb+");
    if (!file) {
        perror("Unable to open file for updating");
        pauseScreen();
        return;
    }

    Student student;
    printf("Enter Registration Number of the student to update: ");
    scanf("%d", &regnNumber);
    getchar(); // To consume the newline character left by scanf

    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.regnNumber == regnNumber) {
            found = 1;

            printf("Enter New Name: ");
            fgets(student.name, MAX_NAME_LENGTH, stdin);
            student.name[strcspn(student.name, "\n")] = 0; // Remove the trailing newline character

            printf("Enter New Father's Name: ");
            fgets(student.fathersName, MAX_NAME_LENGTH, stdin);
            student.fathersName[strcspn(student.fathersName, "\n")] = 0; // Remove the trailing newline character

            printf("Enter New Date of Birth (YYYY-MM-DD): ");
            fgets(student.dob, MAX_DATE_LENGTH, stdin);
            student.dob[strcspn(student.dob, "\n")] = 0; // Remove the trailing newline character

            printf("Enter New Mobile Number: ");
            fgets(student.mobileNumber, MAX_MOBILE_LENGTH, stdin);
            student.mobileNumber[strcspn(student.mobileNumber, "\n")] = 0; // Remove the trailing newline character

            fseek(file, -(long)sizeof(Student), SEEK_CUR);
            fwrite(&student, sizeof(Student), 1, file);
            printf("Student updated successfully!\n");
            pauseScreen();
            break;
        }
    }

    if (!found) {
        printf("Student with Registration Number %d not found.\n", regnNumber);
        pauseScreen();
    }

    fclose(file);
}

void deleteStudent() {
    int regnNumber, found = 0;
    FILE* file = fopen(STUDENT_FILE, "rb");
    FILE* tempFile = fopen("temp.dat", "wb");
    if (!file || !tempFile) {
        perror("Unable to open file for deleting");
        pauseScreen();
        return;
    }

    Student student;
    printf("Enter Registration Number of the student to delete: ");
    scanf("%d", &regnNumber);
    getchar(); // To consume the newline character left by scanf

    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.regnNumber == regnNumber) {
            found = 1;
            continue;
        }
        fwrite(&student, sizeof(Student), 1, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    remove(STUDENT_FILE);
    rename("temp.dat", STUDENT_FILE);

    if (found) {
        printf("Student deleted successfully!\n");
        pauseScreen();
    }
    else {
        printf("Student with Registration Number %d not found.\n", regnNumber);
        pauseScreen();
    }
}

void displayAllStudents() {
    FILE* file = fopen(STUDENT_FILE, "rb");
    if (!file) {
        perror("Unable to open file for reading");
        pauseScreen();
        return;
    }

    Student student;
    printf("=========================================\n");
    printf("           All Student Details\n");
    printf("=========================================\n");
    while (fread(&student, sizeof(Student), 1, file)) {
        printf("Registration Number: %d\n", student.regnNumber);
        printf("Name: %s\n", student.name);
        printf("Father's Name: %s\n", student.fathersName);
        printf("Date of Birth: %s\n", student.dob);
        printf("Mobile Number: %s\n", student.mobileNumber);
        printf("-----------------------------------------\n");
    }
    fclose(file);
    pauseScreen();
}

void displayStudentByRegnNumber() {
    int regnNumber, found = 0;
    FILE* file = fopen(STUDENT_FILE, "rb");
    if (!file) {
        perror("Unable to open file for reading");
        pauseScreen();
        return;
    }

    Student student;
    printf("Enter Registration Number: ");
    scanf("%d", &regnNumber);
    getchar(); // To consume the newline character left by scanf

    while (fread(&student, sizeof(Student), 1, file)) {
        if (student.regnNumber == regnNumber) {
            found = 1;
            printf("=========================================\n");
            printf("          Student Details\n");
            printf("=========================================\n");
            printf("Registration Number: %d\n", student.regnNumber);
            printf("Name: %s\n", student.name);
            printf("Father's Name: %s\n", student.fathersName);
            printf("Date of Birth: %s\n", student.dob);
            printf("Mobile Number: %s\n", student.mobileNumber);
            printf("-----------------------------------------\n");
            break;
        }
    }

    if (!found) {
        printf("Student with Registration Number %d not found.\n", regnNumber);
    }
    fclose(file);
    pauseScreen();
}