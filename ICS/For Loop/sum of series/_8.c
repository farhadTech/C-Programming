#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int sum = 0; // Initialize the sum to 0
    for (int i = 1; i <= n; i++) {
        sum += i * i; // Add the square of i to the sum
    }
    printf("Sum of the series: %d\n", sum); // Print the sum
    return 0;
}
