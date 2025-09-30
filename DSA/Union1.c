#include <stdio.h>
#include <stdlib.h>

union Data {
    int Centimeter;
    float inch;
    double Kilometer;
} Data;

int main() {
    int ch;

    while (1) {
        printf("\n1. Centimeter\n2. Inch\n3. Kilometer\n0. Exit\n");
        printf("Enter the unit for measurement[0-3]: ");
        scanf("%d", &ch);
        switch (ch) {
        case 0:
            printf("Exiting...");
            exit(0);
            break;
        case 1:
            printf("Enter the length in centimeter: ");
            scanf("%d", &Data.Centimeter);
            printf("The length is %d Centimeter.\n", Data.Centimeter);
            break;
        case 2:
            printf("Enter the length in inch: ");
            scanf("%f", &Data.inch);
            printf("The length is %.2f Inch.\n", Data.inch);
            break;
        case 3:
            printf("Enter the length in kilometer: ");
            scanf("%lf", &Data.Kilometer);
            printf("The length is %.2f Kilometer.\n", Data.Kilometer);
            break;
        default:
            printf("Invalid choice...\n");
            break;
        }
    }
    return 0;
}