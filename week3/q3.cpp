#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Interchange 2nd and 2nd last
    if (n >= 2) {
        int temp = arr[1];
        arr[1] = arr[n - 2];
        arr[n - 2] = temp;
    }

    // Output updated array
    printf("\nArray after interchange:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

