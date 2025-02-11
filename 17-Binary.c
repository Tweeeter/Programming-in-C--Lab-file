#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimal) {
    long long binary = 0, base = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter binary: ");
        scanf("%lld", &binary);
        printf("Decimal: %d\n", binaryToDecimal(binary));
    }
	else if (choice == 2) {
        int decimal;
        printf("Enter decimal: ");
        scanf("%d", &decimal);
        printf("Binary: %lld\n", decimalToBinary(decimal));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

