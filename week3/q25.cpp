#include <stdio.h>

int main() {
    int n, pos;
    float arr[100], num;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Input the number to insert
    printf("Enter the number to insert: ");
    scanf("%f", &num);

    // Input the position to insert (1-based index)
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right from position
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number
    arr[pos - 1] = num;
    n++;  // Update array size

    // Display updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}


