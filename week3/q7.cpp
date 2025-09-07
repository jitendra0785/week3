#include <stdio.h>

int main() {
    int n;
    int matrix[50][50];
    int i, j;
    int *ptr;
    int sum = 0;

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

    // Pointer to first element of matrix
    ptr = &matrix[0][0];

    // Compute sum of main diagonal using pointer arithmetic
    for (i = 0; i < n; i++) {
        sum += *(ptr + i * n + i);  // element at [i][i]
    }

    // Output result
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}

