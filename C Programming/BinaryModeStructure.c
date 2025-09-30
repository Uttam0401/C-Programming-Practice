#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Define a structure for student
struct student {
    int id;
    char name[50];
    float score;
};

int main() {
    // Define an array of student structures
    struct student students[] = {
        {1, "Amit", 85.5},
        {2, "Mohan", 90.0},
        {3, "Sohan", 75.2}
    };

    // Open a file in binary mode for writing
    FILE* file_write = fopen("students.bin", "wb");
    if (file_write == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write the array of students to the file
    size_t num_written = fwrite(students, sizeof(struct student), sizeof(students) / sizeof(struct student), file_write);
    if (num_written != sizeof(students) / sizeof(struct student)) {
        perror("Error writing to file");
        fclose(file_write);
        return 1;
    }

    // Close the file after writing
    fclose(file_write);

    // Open the file in binary mode for reading
    FILE* file_read = fopen("students.bin", "rb");
    if (file_read == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Read the content of the file into an array of student structures
    struct student read_students[3]; // Assuming 3 students for simplicity
    size_t num_read = fread(read_students, sizeof(struct student), sizeof(read_students) / sizeof(struct student), file_read);
    if (num_read != sizeof(read_students) / sizeof(struct student)) {
        perror("Error reading from file");
        fclose(file_read);
        return 1;
    }

    // Close the file after reading
    fclose(file_read);

    // Print the content read from the file
    printf("Students read from file:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Score: %.2f\n", read_students[i].id, read_students[i].name, read_students[i].score);
    }

    return 0;
}