#include <stdio.h>
int main() {
    int N, i;
    int SumOfEven = 0, SumOfOdd = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            SumOfEven += i;  // Add to SumOfEven if the number is even
        } else {
            SumOfOdd += i;   // Add to SumOfOdd if the number is odd
        }
    }
    printf("Sum of even numbers from 1 to %d: %d\n", N, SumOfEven);
    printf("Sum of odd numbers from 1 to %d: %d\n", N, SumOfOdd);

    return 0;
}

