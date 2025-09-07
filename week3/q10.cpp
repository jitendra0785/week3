#include <stdio.h>

int main() {
    int rows, cols;
    int arr[50][50];
    int i, j, count = 0;

    // Input size of 2D array
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements
    printf("Enter elements of the %d x %d array:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] != 0) {
                count++;   // count non-zero
            }
        }
    }

    // Output result
    printf("\nTotal number of non-zero elements = %d\n", count);

    return 0;
}

