#include <stdio.h>

int main() {
    int array[10];
    int i;
    int max_value;

    // Input the values to the array
    printf("Enter 10 values for the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Find the maximum value
    max_value = array[0];
    for (i = 1; i < 10; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    // Print the maximum value
    printf("Maximum value: %d\n", max_value);

    return 0;
}
