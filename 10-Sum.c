#include <stdio.h>

int main() {
    int number, i, total = 0;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Calculate the sum from 1 to the entered number
    for (i = 1; i <= number; i++) {
        total += i;
    }

    // Display the result
    printf("The sum of all numbers from 1 to %d is: %d\n", number, total);

    return 0;
}

