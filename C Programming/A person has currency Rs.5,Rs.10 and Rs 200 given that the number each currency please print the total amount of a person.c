// FileHandlingUsingStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    int id;
    char name[50];
    int age;
};

//// Function to read a person record from a file
//void readPersonFromFile(FILE* file, struct Person* person) {
//    if (fscanf(file, "%d,", &person->id) != 1)
//    {
//        person->id = -1;
//    }
//    // Read Name using fgets
//    // Read Name using fgets until a comma is encountered
//    int index = 0;
//    char ch;
//    /*while ((ch = fgetc(file)) != ',' && ch != EOF && index < sizeof(person->name) - 1) {
//        person->name[index++] = ch;
//    }
//    person->name[index] = '\0';*/
//    //fgets(person->name, sizeof(person->name), file);
//    if (fscanf(file,"%49[^,],", person->name) != 1)
//    {
//        person->id = -1;
//    }
//    // Remove the trailing newline character from the name
//    person->name[strcspn(person->name, "\n")] = '\0';
//
//    // Read Age
//    fscanf(file, "%d\n", &person->age);
//    //scanset
//    //if (fscanf(file, "%d,%[^,],%d\n", &person->id, person->name, &person->age) != 3) 
//    //{
//    //    person->id = -1; // Set an invalid ID to indicate read failure
//    //}
//}

// Function to write a person record to a file
void writePersonToFile(FILE* file, const struct Person person) 
{
    fprintf(file, "%d,%s,%d\n", person.id, person.name, person.age);
}

// Function to read a person record from a file
void readPersonFromFile(FILE* file, struct Person* person) 
{
    if (fscanf(file, "%d,%[^,],%d\n", &person->id, person->name, &person->age) != 3)
    {
        person->id = -1;
    }
}

// Function to update an existing record in the file
//void updateRecordInFile(const char* filename, int recordIdToUpdate, const struct Person updatedPerson) 
//{
//    FILE* file = NULL;
//    /*file = fopen(filename, "r+");
//    if (file == NULL) 
//    {
//        printf("Error opening file.\n");
//        return;
//    }*/
//
//    struct Person person;
//
//    // Search for the record to update
//    while (!feof(file)) 
//    {
//        file = fopen(filename, "r+");
//        if (file == NULL)
//        {
//            printf("Error opening file.\n");
//            return;
//        }
//        long currentOffset = ftell(file); // Store the current file position
//        readPersonFromFile(file, &person);
//
//        if (feof(file) || person.id == -1) 
//        {
//            break;
//        }
//
//        if (person.id == recordIdToUpdate) {
//            // Move the file pointer back to the beginning of the current record
//            //SEEK_SET, SEEK_CUR, SEEK_END
//            fseek(file, currentOffset, SEEK_SET);
//            currentOffset = ftell(file);
//            // Write the updated record over the existing record in the file
//            writePersonToFile(file, updatedPerson);
//            currentOffset = ftell(file);
//            //fseek(file, sizeof(person), SEEK_CUR);
//            //break;
//        }
//        fclose(file);
//    }
//
//    //fclose(file);
//}
//void updateRecordInFile(const char* filename, int recordIdToUpdate, const struct Person updatedPerson) {
//    FILE* file = fopen(filename, "r+");
//    if (file == NULL) {
//        printf("Error opening file.\n");
//        return;
//    }
//
//    struct Person person;
//
//    // Search for the records to update
//    while (!feof(file)) {
//        long currentOffset = ftell(file); // Store the current file position
//        readPersonFromFile(file, &person);
//
//        if (feof(file) || person.id != -1) {
//            break;
//        }
//
//        if (person.id == recordIdToUpdate) {
//            // Move the file pointer back to the beginning of the current record
//            fseek(file, currentOffset, SEEK_SET);
//
//            // Write the updated record over the existing record in the file
//            writePersonToFile(file, updatedPerson);
//        }
//    }
//
//    // Clear the end-of-file indicator and seek to the end of the file
//    clearerr(file);
//    fseek(file, 0, SEEK_END);
//
//    fclose(file);
//}

void updateRecordInFile(const char* filename, int recordIdToUpdate, const struct Person updatedPerson) {
    FILE* originalFile = fopen(filename, "r");
    if (originalFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    FILE* tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error opening temporary file.\n");
        fclose(originalFile);
        return;
    }

    struct Person person;

    // Search for the records to update
    while (!feof(originalFile)) 
    {
        int value = fscanf(originalFile, "%d,%49[^,],%d\n", &person.id, person.name, &person.age);
        if (value == 3)
        {
            if (person.id == recordIdToUpdate)
            {
                // Update the record if it matches the given ID
                writePersonToFile(tempFile, updatedPerson);
            }
            else
            {
                // Write the record as it is to the temporary file
                writePersonToFile(tempFile, person);
            }
        }
        else
        {
            break;
        }
     }
    fclose(originalFile);
    fclose(tempFile);

    // Remove the original file and rename the temporary file to the original file name
    remove(filename);
    rename("temp.txt", filename);
}

// Function to delete all records with a given ID from the file
void deleteRecordsFromFile(const char* filename, int targetId) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    FILE* tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        fclose(file);
        return;
    }

    struct Person person;
    while (!feof(file)) {
        readPersonFromFile(file, &person);

        // Check if the read was successful before writing the record
        if (!feof(file) && person.id != targetId) {
            writePersonToFile(tempFile, person);
        }
    }

    fclose(file);
    fclose(tempFile);

    // Remove the original file
    remove(filename);

    // Rename the temporary file to the original filename
    rename("temp.txt", filename);
}

int main() 
{
    FILE* file;
    struct Person person1 = { 1, "Satyam", 30 };
    struct Person person2 = { 2, "Amit Kumar", 35 };
    char filename[] = "people.txt";

    // Open the file in append mode
    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write the persons' data to the file
    writePersonToFile(file, person1);
    writePersonToFile(file, person2);

    // Close the file after writing
    fclose(file);

    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display all the records from the file
    printf("Records from the file:\n");
    while (1) 
    {
        struct Person person;
        readPersonFromFile(file, &person);
        if (person.id == -1) 
        {
            // Break the loop when there are no more records to read
            break;
        }
        printf("ID: %d\n", person.id);
        printf("Name: %s\n", person.name);
        printf("Age: %d\n", person.age);
        printf("\n");
    
    }
    // Close the file after reading
    fclose(file);

    //// Read and display all the records from the file
    //printf("Records from the file:\n");
    /*while (!feof(file)) 
    {
        struct Person person;
        readPersonFromFile(file, &person);
        if (!feof(file)) 
        {
            printf("ID: %d\n", person.id);
            printf("Name: %s\n", person.name);
            printf("Age: %d\n", person.age);
            printf("\n");
        }
    }*/



//Update a record from a file
    struct Person personToUpdate = { 1, "New gfggfffName", 60 };

    // Assume we want to update the record with ID 1
    int recordIdToUpdate = 1;

    // Update the record in the file
    updateRecordInFile(filename, recordIdToUpdate, personToUpdate);

    // Read and display all the records from the file
    printf("Records from the file:\n");
    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    while (1)
    {
        struct Person person;
        readPersonFromFile(file, &person);
        if (person.id == -1)
        {
            // Break the loop when there are no more records to read
            break;
        }
        printf("ID: %d\n", person.id);
        printf("Name: %s\n", person.name);
        printf("Age: %d\n", person.age);
        printf("\n");
    }
    // Close the file after reading
    fclose(file);
    deleteRecordsFromFile("people.txt", 2);

    // Read and display all the records from the file
    printf("Records from the file:\n");
    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    while (1)
    {
        struct Person person;
        readPersonFromFile(file, &person);
        if (person.id == -1)
        {
            // Break the loop when there are no more records to read
            break;
        }
        printf("ID: %d\n", person.id);
        printf("Name: %s\n", person.name);
        printf("Age: %d\n", person.age);
        printf("\n");
    }
    // Close the file after reading
    fclose(file);
    return 0;
}