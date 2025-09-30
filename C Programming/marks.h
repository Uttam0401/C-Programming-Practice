//marks.h

#ifndef MARKS_H
#define MARKS_H

typedef struct {
    int regnNumber;
    int marksC;
    int marksCPlusPlus;
    int marksJava;
    int marksDSA;
} Marks;

void addMarks();
void updateMarks();
void deleteMarks();
void displayAllMarks();
void displayMarksByRegnNumber();

#endif // MARKS_H