#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[50][50];
    int sum = 0;

    // Input size of square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute sum of diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i]; // element at main diagonal
    }

    // Display result
    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}

