#include <stdio.h>

// Function to read a square matrix
void readSquare(int arr[50][50], int n) {
    int i, j;
    printf("Enter the elements of the %d x %d square matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to display a square matrix
void displaySquare(int arr[50][50], int n) {
    int i, j;
    printf("\nThe %d x %d square matrix is:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int matrix[50][50];

    // Input size of square matrix
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    // Function calls
    readSquare(matrix, n);
    displaySquare(matrix, n);

    return 0;
}

