#include <stdio.h>

#define MAX 10

// Function to read a 3D matrix
void readMatrix(int a[MAX][MAX][MAX], int p, int q, int r) {
    int i, j, k;
    printf("Enter elements of matrix (%d x %d x %d):\n", p, q, r);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

// Function to display a 3D matrix
void displayMatrix(int a[MAX][MAX][MAX], int p, int q, int r) {
    int i, j, k;
    printf("\nMatrix (%d x %d x %d):\n", p, q, r);
    for (i = 0; i < p; i++) {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

// Function to compute sum of two 3D matrices
void sumMatrix(int a[MAX][MAX][MAX], int b[MAX][MAX][MAX],
               int c[MAX][MAX][MAX], int p, int q, int r) {
    int i, j, k;
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                c[i][j][k] = a[i][j][k] + b[i][j][k];
            }
        }
    }
}

// Function to compute transpose (swap last two dimensions: q and r)
void transposeMatrix(int a[MAX][MAX][MAX], int b[MAX][MAX][MAX],
                     int p, int q, int r) {
    int i, j, k;
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                b[i][k][j] = a[i][j][k];  // swap j and k
            }
        }
    }
}

// Function to compute product of two 3D matrices
void productMatrix(int a[MAX][MAX][MAX], int b[MAX][MAX][MAX],
                   int c[MAX][MAX][MAX], int p, int q, int r) {
    int i, j, k;
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                c[i][j][k] = a[i][j][k] * b[i][j][k];
            }
        }
    }
}

int main() {
    int A[MAX][MAX][MAX], B[MAX][MAX][MAX], C[MAX][MAX][MAX];
    int p, q, r, choice;

    printf("Enter dimensions of matrix (p q r): ");
    scanf("%d %d %d", &p, &q, &r);

    printf("\nEnter elements of first matrix (A):\n");
    readMatrix(A, p, q, r);

    printf("\nEnter elements of second matrix (B):\n");
    readMatrix(B, p, q, r);

    do {
        printf("\n=== MENU ===\n");
        printf("1. Display Matrix A\n");
        printf("2. Display Matrix B\n");
        printf("3. Sum of A and B\n");
        printf("4. Transpose of A\n");
        printf("5. Product of A and B\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayMatrix(A, p, q, r);
                break;
            case 2:
                displayMatrix(B, p, q, r);
                break;
            case 3:
                sumMatrix(A, B, C, p, q, r);
                displayMatrix(C, p, q, r);
                break;
            case 4: {
                int T[MAX][MAX][MAX];
                transposeMatrix(A, T, p, q, r);
                displayMatrix(T, p, r, q);
                break;
            }
            case 5:
                productMatrix(A, B, C, p, q, r);
                displayMatrix(C, p, q, r);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

