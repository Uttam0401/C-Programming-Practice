//student.h

#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50
#define MAX_MOBILE_LENGTH 15
#define MAX_DATE_LENGTH 12

typedef struct {
    int regnNumber;
    char name[MAX_NAME_LENGTH];
    char fathersName[MAX_NAME_LENGTH];
    char dob[MAX_DATE_LENGTH]; // Format: YYYY-MM-DD
    char mobileNumber[MAX_MOBILE_LENGTH];
} Student;

void addStudent();
void updateStudent();
void deleteStudent();
void displayAllStudents();
void displayStudentByRegnNumber();

#endif // STUDENT_H