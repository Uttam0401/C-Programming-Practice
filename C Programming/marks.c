//marks.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "marks.h"
#include "common.h"

#define MARKS_FILE "marks.dat"

void addMarks() {
    FILE* file = fopen(MARKS_FILE, "ab");
    if (!file) {
        perror("Unable to open file for writing");
        pauseScreen();
        return;
    }

    Marks mark;
    printf("Enter Registration Number: ");
    scanf("%d", &mark.regnNumber);
    getchar(); // To consume the newline character left by scanf
    printf("Enter Marks in C: ");
    scanf("%d", &mark.marksC);
    printf("Enter Marks in C++: ");
    scanf("%d", &mark.marksCPlusPlus);
    printf("Enter Marks in Java: ");
    scanf("%d", &mark.marksJava);
    printf("Enter Marks in DSA: ");
    scanf("%d", &mark.marksDSA);

    fwrite(&mark, sizeof(Marks), 1, file);
    fclose(file);
    printf("Marks added successfully!\n");
    pauseScreen();
}

void updateMarks() {
    int regnNumber, found = 0;
    FILE* file = fopen(MARKS_FILE, "rb+");
    if (!file) {
        perror("Unable to open file for updating");
        pauseScreen();
        return;
    }

    Marks mark;
    printf("Enter Registration Number of the marks to update: ");
    scanf("%d", &regnNumber);
    getchar(); // To consume the newline character left by scanf

    while (fread(&mark, sizeof(Marks), 1, file)) {
        if (mark.regnNumber == regnNumber) {
            found = 1;
            printf("Enter New Marks in C: ");
            scanf("%d", &mark.marksC);
            printf("Enter New Marks in C++: ");
            scanf("%d", &mark.marksCPlusPlus);
            printf("Enter New Marks in Java: ");
            scanf("%d", &mark.marksJava);
            printf("Enter New Marks in DSA: ");
            scanf("%d", &mark.marksDSA);

            fseek(file, -(long)sizeof(Marks), SEEK_CUR);
            fwrite(&mark, sizeof(Marks), 1, file);
            printf("Marks updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Marks with Registration Number %d not found.\n", regnNumber);
    }

    fclose(file);
    pauseScreen();
}

void deleteMarks() {
    int regnNumber, found = 0;
    FILE* file = fopen(MARKS_FILE, "rb");
    FILE* tempFile = fopen("temp.dat", "wb");
    if (!file || !tempFile) {
        perror("Unable to open file for deleting");
        pauseScreen();
        return;
    }

    Marks mark;
    printf("Enter Registration Number of the marks to delete: ");
    scanf("%d", &regnNumber);
    getchar(); // To consume the newline character left by scanf

    while (fread(&mark, sizeof(Marks), 1, file)) {
        if (mark.regnNumber == regnNumber) {
            found = 1;
            continue;
        }
        fwrite(&mark, sizeof(Marks), 1, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove(MARKS_FILE);
        rename("temp.dat", MARKS_FILE);
        printf("Marks deleted successfully!\n");
    }
    else {
        printf("Marks with Registration Number %d not found.\n", regnNumber);
    }
    pauseScreen();
}

void displayAllMarks() {
    FILE* file = fopen(MARKS_FILE, "rb");
    if (!file) {
        perror("Unable to open file for reading");
        pauseScreen();
        return;
    }

    Marks mark;
    printf("=========================================\n");
    printf("           All Marks Details\n");
    printf("=========================================\n");
    while (fread(&mark, sizeof(Marks), 1, file)) {
        printf("Registration Number: %d\n", mark.regnNumber);
        printf("Marks in C: %d\n", mark.marksC);
        printf("Marks in C++: %d\n", mark.marksCPlusPlus);
        printf("Marks in Java: %d\n", mark.marksJava);
        printf("Marks in DSA: %d\n", mark.marksDSA);
        printf("-----------------------------------------\n");
    }

    fclose(file);
    pauseScreen();
}

void displayMarksByRegnNumber() {
    int regnNumber, found = 0;
    FILE* file = fopen(MARKS_FILE, "rb");
    if (!file) {
        perror("Unable to open file for reading");
        pauseScreen();
        return;
    }

    Marks mark;
    printf("Enter Registration Number: ");
    scanf("%d", &regnNumber);
    getchar(); // To consume the newline character left by scanf

    while (fread(&mark, sizeof(Marks), 1, file)) {
        if (mark.regnNumber == regnNumber) {
            found = 1;
            printf("=========================================\n");
            printf("          Marks Details\n");
            printf("=========================================\n");
            printf("Registration Number: %d\n", mark.regnNumber);
            printf("Marks in C: %d\n", mark.marksC);
            printf("Marks in C++: %d\n", mark.marksCPlusPlus);
            printf("Marks in Java: %d\n", mark.marksJava);
            printf("Marks in DSA: %d\n", mark.marksDSA);
            printf("-----------------------------------------\n");
            break;
        }
    }

    if (!found) {
        printf("Marks with Registration Number %d not found.\n", regnNumber);
    }

    fclose(file);
    pauseScreen();
}