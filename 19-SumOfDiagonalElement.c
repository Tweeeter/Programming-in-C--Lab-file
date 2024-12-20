#include <stdio.h>

#define MAX 100

int sumDiagonalElements(int m, int n, int matrix[MAX][MAX]) {
    int sum = 0, i;
    for (i = 0; i < m && i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int m, n, i, j, matrix[MAX][MAX];

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = sumDiagonalElements(m, n, matrix);
    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}

