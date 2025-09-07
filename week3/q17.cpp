#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input matrix size
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sum = 0;
    
    // Calculate sum of elements below main diagonal
    for (int i = 1; i < rows; i++) {        // start from row 1
        for (int j = 0; j < i && j < cols; j++) {  // j < i
            sum += matrix[i][j];
        }
    }
    
    printf("Sum of elements below the main diagonal: %d\n", sum);
    
    return 0;
}

