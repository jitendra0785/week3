#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int *p, *q, *r;
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix (A):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix (B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize pointers
    p = &A[0][0];
    q = &B[0][0];
    r = &C[0][0];

    // Add matrices using pointers
    for (i = 0; i < 9; i++) {
        *(r + i) = *(p + i) + *(q + i);
    }

    // Display result
    printf("\nResultant Matrix (C = A + B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

