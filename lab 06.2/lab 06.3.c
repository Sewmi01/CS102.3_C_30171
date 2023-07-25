#include <stdio.h>

int main() {
    int array[10];
    int i;
    int sum = 0;
    float average_value;

    // Input the values to the array
    printf("Enter 10 values for the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    // Calculate the average value
    average_value = (float)sum / 10;

    // Print the average value
    printf("Average value: %.2f\n", average_value);

    return 0;
}

