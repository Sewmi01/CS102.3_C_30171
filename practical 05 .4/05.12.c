#include <stdio.h>

void printFactors(int number);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);
    printFactors(number);

    return 0;
}

void printFactors(int number) {
    int i;

    for (i = 1; i <= number; ++i) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

