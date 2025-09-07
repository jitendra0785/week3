#include <stdio.h>

int main() {
    int rows, cols;
    int arr[50][50];
    int odd[2500], even[2500];  // maximum capacity if 50x50
    int i, j, oddCount = 0, evenCount = 0;

    // Input size of 2D array
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements
    printf("Enter elements of the %d x %d array:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] % 2 == 0) {
                even[evenCount++] = arr[i][j]; // store even
            } else {
                odd[oddCount++] = arr[i][j];   // store odd
            }
        }
    }

    // Display even elements
    printf("\nEven elements:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    // Display odd elements
    printf("\nOdd elements:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

