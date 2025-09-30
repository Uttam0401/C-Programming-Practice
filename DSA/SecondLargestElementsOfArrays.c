//Find the second largest number in an array.
        

#include <stdio.h>

int main() {
    int Size;
    int largest, secondLargest;

    printf("Please enter the size of the array: ");
    scanf("%d", &Size);

    int Arr[Size];
    for (int i = 0; i < Size; i++) {
        printf("Please enter array element %d: ", i + 1);
        scanf("%d", &Arr[i]);
    }

    if (Arr[0] > Arr[1]) {
        largest = Arr[0];
        secondLargest = Arr[1];
    } else {
        largest = Arr[1];
        secondLargest = Arr[0];
    }

    for (int i = 2; i < Size; i++) {
        if (Arr[i] > largest) {
            secondLargest = largest;
            largest = Arr[i];
        } else if (Arr[i] > secondLargest && Arr[i] != largest) {
            secondLargest = Arr[i];
        }
    }
    printf("\nThe array elements are:\n");
    for (int i = 0; i < Size; i++) {
        printf("%d\t", Arr[i]);
    }
    printf("\n");

    printf("The largest element of the array is: %d\n", largest);
    printf("The second largest element of the array is: %d\n", secondLargest);

    return 0;
}
