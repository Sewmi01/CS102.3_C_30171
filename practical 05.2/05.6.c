#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    // Input base and exponent from user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using a loop
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    // Print the result
    printf("%d raised to the power %d is %lld\n", base, exponent, result);

    return 0;
}

