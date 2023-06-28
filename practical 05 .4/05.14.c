#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE];
    int i;

    printf("Enter %d integers:\n", SIZE);

    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &array[i]);
    }

    printf("The array you entered is:\n");

    for (i = 0; i < SIZE; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}

