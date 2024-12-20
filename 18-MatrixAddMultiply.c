#include <stdio.h>

#define MAX 100

void matrixOperation(int n, int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int isMultiply) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = isMultiply ? 0 : a[i][j] + b[i][j];
            if (isMultiply) {
                for (k = 0; k < n; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
}

int main() {
    int n, i, j, a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];

    printf("Enter the order of the matrices (n): ");
    scanf("%d", &n);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    matrixOperation(n, a, b, result, 0);
    printf("Sum of the matrices:\n");
    for (i = 0; i < n; i++, printf("\n"))
        for (j = 0; j < n; j++)
            printf("%d ", result[i][j]);

    matrixOperation(n, a, b, result, 1);
    printf("Product of the matrices:\n");
    for (i = 0; i < n; i++, printf("\n"))
        for (j = 0; j < n; j++)
            printf("%d ", result[i][j]);

    return 0;
}

