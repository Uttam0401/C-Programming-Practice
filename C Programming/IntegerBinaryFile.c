#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_LENGTH 10

int main() {
    FILE* file;
    int num[MAX_INPUT_LENGTH] = {1,2,3,4,5,6,7,8,9,10};

    // Create a file in binary mode for writing
    file = fopen("binary_integer_file.bin", "wb");
    if (file == NULL) {
        perror("Error creating file");
        return 1;
    }

    // Write input data to the file
    fwrite(num, sizeof(int), MAX_INPUT_LENGTH, file);

    // Close the file
    fclose(file);

    // Open the file in binary mode for reading
    file = fopen("binary_integer_file.bin", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the content of the file
    int read_data[MAX_INPUT_LENGTH];
    size_t bytes_read = fread(read_data, sizeof(int), sizeof(read_data), file);

    // Close the file
    fclose(file);

    // Print the content read from the file
    printf("Bytes read: %zu\n", bytes_read);
    printf("Content read from file: \n");
    for (int i = 0; i < MAX_INPUT_LENGTH; i++)
    {
        printf("%d ", read_data[i]);
    }
    return 0;
}