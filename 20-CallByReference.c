#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapNumbers(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

