#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100];
    int *p = arr;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }

    // Sort array (simple bubble sort using pointers)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    // Second smallest -> *(p + 1)
    // Second biggest -> *(p + n - 2)
    temp = *(p + 1);
    *(p + 1) = *(p + n - 2);
    *(p + n - 2) = temp;

    // Display modified array
    printf("\nArray after interchanging 2nd smallest and 2nd biggest:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}

