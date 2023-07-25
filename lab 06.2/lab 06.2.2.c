#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], scalarSum = 0;
    int vectorSum[size], i;

    // Input values for the first array
    printf("Enter %d values for the first array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Input values for the second array
    printf("Enter %d values for the second array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Scalar Sum (Adding values of each element of an array)
    for (i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }

    // Vector Sum (Adding values of each relative elements of an array and store them in third array)
    for (i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }

    // Display the scalar sum
    printf("Scalar Sum: %d\n", scalarSum);

    // Display the vector sum
    printf("Vector Sum (Third Array): ");
    for (i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    return 0;
}

