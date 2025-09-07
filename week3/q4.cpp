#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    long long sum = 0;   // long long for large sums

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of squares
    for (i = 0; i < n; i++) {
        sum += (long long)arr[i] * arr[i];
    }

    // Output result
    printf("\nSum of squares of elements = %lld\n", sum);

    return 0;
}

