#include <stdio.h>

int main() {
    int rows, cols;
    int arr[50][50];   // assuming max 50x50
    int i, j;
    long long sum = 0; 
    double mean;

    // Input size of 2D array
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    // Calculate mean
    mean = (double)sum / (rows * cols);

    // Output results
    printf("\nSum of elements = %lld\n", sum);
    printf("Mean of elements = %.2f\n", mean);

    return 0;
}

