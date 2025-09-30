#include <stdio.h>

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    while (number >= 10) {
        number = number / 10;
    }

    
    printf("The first digit is: %d\n", number);

    return 0;
}