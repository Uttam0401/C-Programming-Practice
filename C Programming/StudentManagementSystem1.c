#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "marks.h"
#include "common.h"
#include <stdlib.h>

#define CUTOFF_1ST_DIV 60
#define CUTOFF_2ND_DIV 45
#define CUTOFF_3RD_DIV 30

void generateReport() {
    FILE* studentFile = fopen("students.dat", "rb");
    FILE* marksFile = fopen("marks.dat", "rb");
    if (!studentFile || !marksFile) {
        perror("Unable to open file for generating report");
        return;
    }

    Student student;
    Marks mark;
    int totalMarks;
    float percentage;
    char grade[15];

    printf("=========================================\n");
    printf("             Report\n");
    printf("=========================================\n");

    while (fread(&student, sizeof(Student), 1, studentFile)) {
        printf("Registration Number: %d\n", student.regnNumber);
        printf("Name: %s\n", student.name);
        printf("Mobile Number: %s\n", student.mobileNumber);

        totalMarks = 0;
        rewind(marksFile);
        while (fread(&mark, sizeof(Marks), 1, marksFile)) {
            if (mark.regnNumber == student.regnNumber) {
                printf("Marks in C: %d\n", mark.marksC);
                printf("Marks in C++: %d\n", mark.marksCPlusPlus);
                printf("Marks in Java: %d\n", mark.marksJava);
                printf("Marks in DSA: %d\n", mark.marksDSA);

                totalMarks = mark.marksC + mark.marksCPlusPlus + mark.marksJava + mark.marksDSA;
                break;
            }
        }

        percentage = (float)totalMarks / 4;

        if (percentage >= CUTOFF_1ST_DIV) {
            strcpy(grade, "1st Division");
        }
        else if (percentage >= CUTOFF_2ND_DIV) {
            strcpy(grade, "2nd Division");
        }
        else if (percentage >= CUTOFF_3RD_DIV) {
            strcpy(grade, "3rd Division");
        }
        else {
            strcpy(grade, "Fail");
        }

        printf("Grade: %s\n", grade);
        printf("-----------------------------------------\n");
    }

    fclose(studentFile);
    fclose(marksFile);
    pauseScreen();
}

void clearScreen() {
    // For Windows
    system("cls");
    // For UNIX/Linux
    // system("clear");
}

void pauseScreen() {
    printf("Press Enter to continue...");
    getchar();
}