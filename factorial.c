#include <stdio.h>

int main() {
    int number, i;
    int factorial = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %d\n", number, factorial);

    return 0;
}

