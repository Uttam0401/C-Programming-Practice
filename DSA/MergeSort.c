#include <stdio.h>
#include <stdlib.h> // Include the standard library for memory allocation

// Function to print the array
void printArray(int arr[], int start, int end) {
    int i;
    printf("printArray function called with start=%d and end=%d. ", start, end);
    for (i = start; i <= end; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to merge two subarrays of arr[]
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
//{ 12, 11, 13, 15, 1, 3 }
void merge(int arr[], int l, int m, int r) {
    printf("Merge function called with l=%d, m=%d, r=%d.\n",l, m, r);
    int i, j, k;
    int n1 = m - l + 1; // Length of the first subarray
    int n2 = r - m;     // Length of the second subarray

    // Create temporary arrays using dynamic memory allocation
    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));

    // Check if memory allocation was successful
    if (L == NULL || R == NULL) {
        printf("Memory allocation failed\n");
        return; // Exit the program with an error code
    }
    //{ 12, 11, 13, 15, 1, 3 }
    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]

    // Initial indexes of first and second subarrays
    i = 0;
    j = 0;

    //{ 12, 11, 13, 15, 1, 3 }
    // Initial index of merged subarray
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //{ 12, 11, 13, 15, 1, 3 }
    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    printArray(arr, l, r);
    // Free dynamically allocated memory
    free(L);
    free(R);
}

// Main function to implement Merge Sort
//{ 12, 11, 13, 15, 1, 3 }
void mergeSort(int arr[], int l, int r) { //l=0, r=5;l=0,r=2;l=0,r=1;l=0,r=0
    if (l < r) {
        printf("MergeSort function called with l=%d, r=%d\n",l,r);
        // Same as (l+r)/2, but avoids overflow for large l and r
        int m = l + (r - l) / 2;//2;1;0

        //printf("Array: ");
        printArray(arr, l, r);
        // Sort first and second halves
        mergeSort(arr, l, m);//l=0,m=2;l=0,m=1;l=0,m=0
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

// Main function
int main() {
    int arr[] = { 12, 11, 13, 15, 1, 3 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, 0,  arr_size-1);

    mergeSort(arr, 0, arr_size - 1);

    printf("Sorted array is \n");
    printArray(arr, 0, arr_size-1);
    return 0;
}