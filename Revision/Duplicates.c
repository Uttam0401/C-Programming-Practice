///Find Duplicates Arrays And Duplicates Numbers And Stores In A New Arrays. Get The Numbers Of Times A Duplicates Elements Is Founds.

#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int duplicates[size];
    int counts[size];
    int found[size];
    int dupIndex = 0;

    // Initialize counts and found arrays
    for (int i = 0; i < size; i++) {
        counts[i] = 0;
        found[i] = 0;
    }

    // Find duplicates and their counts
    for (int i = 0; i < size; i++) {
        if (found[i] == 1) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                found[j] = 1;
            }
        }
        if (count > 1) {
            duplicates[dupIndex] = arr[i];
            counts[dupIndex] = count;
            dupIndex++;
        }
    }

    // Print the duplicates and their counts
    printf("Duplicate numbers and their counts:\n");
    for (int i = 0; i < dupIndex; i++) {
        printf("%d: %d times\n", duplicates[i], counts[i]);
    }
}

int main() {
    int size;
    
    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, size);

    return 0;
}
