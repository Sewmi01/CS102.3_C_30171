#include <stdio.h>

int main() {
    int matrixA[3][3] = {
        {3, 2, 4},
        {1, 4, 6},
        {4, 3, 2}
    };

    int matrixB[3][3] = {
        {2, 6, 3},
        {4, 3, 2},
        {5, 1, 7}
    };

    int matrixSum[3][3];

    // Calculate the sum of the matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Display the matrix sum
    printf("Matrix Sum:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrixSum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
