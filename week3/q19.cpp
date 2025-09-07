#include <stdio.h>

// Function to check if a matrix is lower triangular
int isLowerTriangular(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Elements above main diagonal
            if (a[i][j] != 0) {
                return 0;  // Not lower triangular
            }
        }
    }
    return 1;  // Lower triangular
}

int main() {
    int n;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    int matrix[10][10];  // Assuming max size 10x10
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if matrix is lower triangular
    if (isLowerTriangular(matrix, n)) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is not lower triangular.\n");
    }
    
    return 0;
}

