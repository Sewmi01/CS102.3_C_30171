#include <stdio.h>

int main() {
    int array[10];
    int i;

    // Input the values to the array
    printf("Enter 10 values for the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Print the array in reverse order
    printf("Reverse order of values: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

