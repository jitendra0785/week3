#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Pointer to a 2D array of 3 columns
    int (*ptr)[3] = matrix;

    printf("Elements of the matrix using pointer:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Access element using pointer
            printf("%d\t", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}

