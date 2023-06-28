#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    int i;

    printf("Enter %d numbers:\n", SIZE);

    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < SIZE; ++i) {
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);

    return 0;
}

