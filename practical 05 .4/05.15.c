#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE];
    int i, count = 0;

    printf("Enter %d integers:\n", SIZE);

    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < SIZE; ++i) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }

    printf("The count of even numbers in the array is: %d\n", count);

    return 0;
}

