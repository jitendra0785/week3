#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Digits of the number: ");
    
    // Find the number of digits
    int temp = number;
    int digits[10];  // Assuming max 10 digits
    int i = 0;
    
    // Extract digits from right to left
    while (temp > 0) {
        digits[i] = temp % 10;
        temp = temp / 10;
        i++;
    }
    
    // Print digits from left to right
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", digits[j]);
    }
    
    printf("\n");
    return 0;
}

