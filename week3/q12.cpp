#include <stdio.h>

int main() {
    int n1, n2, i;
    float arr1[100], arr2[100], merged[200];

    // Input size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%f", &arr1[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%f", &arr2[i]);
    }

    // Merge arrays
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    int total = n1 + n2;

    // Display merged array in reverse
    printf("\nMerged array in reverse order:\n");
    for (i = total - 1; i >= 0; i--) {
        printf("%.2f ", merged[i]);
    }
    printf("\n");

    return 0;
}

