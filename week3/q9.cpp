#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[50][50];
    long long product = 1;

    // Input size of square matrix
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute product of diagonal above main diagonal
    for (i = 0; i < n - 1; i++) {
        product *= matrix[i][i + 1];
    }

    // Output result
    printf("\nProduct of elements on the diagonal above the main diagonal = %lld\n", product);

    return 0;
}

