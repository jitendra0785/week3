#include <stdio.h>

// Function to check if a matrix is upper triangular
int isUpperTriangular(int a[][10], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {  // Elements below main diagonal
            if (a[i][j] != 0) {
                return 0;  // Not upper triangular
            }
        }
    }
    return 1;  // Upper triangular
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
    
    // Check if matrix is upper triangular
    if (isUpperTriangular(matrix, n)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }
    
    return 0;
}

