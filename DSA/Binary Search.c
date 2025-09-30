/*#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target) //40
{
    //{ 2, 3, 4, 10, 40 };
    int left = 0;
    int right = size - 1;//4

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;  //4

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1; //4

        // If target is smaller, ignore right half
        else
            right = mid - 1;//
    }

    // If target is not found in the array
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 100;

    int result = binarySearch(arr, size, target);
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}
    */

    #include<stdio.h>
    int main(){
        printf("Hello World");
    }