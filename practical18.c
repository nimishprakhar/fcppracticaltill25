#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b;

    printf("\nMath Operations Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exponent\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Addition
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Sum is: %f\n", a + b);
            break;

        case 2:
            // Subtraction
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Difference is: %f\n", a - b);
            break;

        case 3:
            // Multiplication
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Multiplication is: %f\n", a * b);
            break;

        case 4:
            // Division
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b == 0) {
                printf("Error: Cannot divide by zero\n");
            } else {
                printf("Division is: %f\n", a / b);
            }
            break;

        case 5:
            // Exponentiation
            printf("Enter the base and exponent: ");
            scanf("%f %f", &a, &b);
            printf("Exponentiation is: %f\n", pow(a, b));
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
    }

    return 0;
}