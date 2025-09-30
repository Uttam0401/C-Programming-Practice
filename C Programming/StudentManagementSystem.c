// StudentManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"
#include "marks.h"
#include "common.h"

void showMainMenu() {
    int choice;

    do {
        clearScreen();
        printf("=========================================\n");
        printf("  ChiPi Technologies Student Management System\n");
        printf("=========================================\n");
        printf("1. Add Student\n");
        printf("2. Update Student\n");
        printf("3. Delete Student\n");
        printf("4. Display All Students\n");
        printf("5. Display Student by Registration Number\n");
        printf("6. Add Marks\n");
        printf("7. Update Marks\n");
        printf("8. Delete Marks\n");
        printf("9. Display All Marks\n");
        printf("10. Display Marks by Registration Number\n");
        printf("11. Generate Report\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            updateStudent();
            break;
        case 3:
            deleteStudent();
            break;
        case 4:
            displayAllStudents();
            break;
        case 5:
            displayStudentByRegnNumber();
            break;
        case 6:
            addMarks();
            break;
        case 7:
            updateMarks();
            break;
        case 8:
            deleteMarks();
            break;
        case 9:
            displayAllMarks();
            break;
        case 10:
            displayMarksByRegnNumber();
             break;
        case 11:
            generateReport();
              break;
        case 12:
            printf("Exiting the system. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            pauseScreen();
            break;
        }
    } while (choice != 12);
}

int main() {
    showMainMenu();
    return 0;
}