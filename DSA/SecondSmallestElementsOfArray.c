#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("The Arrays %d Elements Are: ", i + 1);
        scanf("%d", &array[i]);
    }

    int smallest, secondSmallest;
    if (array[0] < array[1]) {
        smallest = array[0];
        secondSmallest = array[1];
    } else {
        smallest = array[1];
        secondSmallest = array[0];
    }

    for (int i = 2; i < size; i++) {
        if (array[i] < smallest) {
            secondSmallest = smallest;
            smallest = array[i];
        } else if (array[i] < secondSmallest && array[i] != smallest) {
            secondSmallest = array[i];
        }
    }


    printf("The second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}
