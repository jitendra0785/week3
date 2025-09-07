#include <stdio.h>

// Function to check if a matrix is symmetric
int isSymmetric(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                return 0;  // Not symmetric
            }
        }
    }
    return 1;  // Symmetric
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
    
    // Check if matrix is symmetric
    if (isSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    
    return 0;
}

