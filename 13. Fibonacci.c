#include <stdio.h>
int main() {
    int n, i;
    int FirstNumber = 0, SecondNumber = 1, next;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", FirstNumber);
        next = FirstNumber + SecondNumber;
        FirstNumber = SecondNumber;
        SecondNumber = next;
    }

    return 0;
}

