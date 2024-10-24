#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    // Input two operands
    printf("Enter first operand: ");
    scanf("%f", &num1);
    printf("Enter second operand: ");
    scanf("%f", &num2);

    // Display menu for operation selection
    printf("Select an operation:\n");
    printf("1. Sum\n2. Minus\n3. Multiply\n4. Divide\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform the operation based on the user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid choice.\n");
            break;
    }

    return 0;
}

