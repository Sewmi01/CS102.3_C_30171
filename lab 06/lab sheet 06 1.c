
#include <stdio.h>

int main() {
    int array[10];
    int i;
    int min_value;


    printf("Enter 10 values for the array: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }


    min_value = array[0];
    for (i = 1; i < 10; i++) {
        if (array[i] < min_value) {
            min_value = array[i];
        }
    }


    printf("Minimum value: %d\n",min_value);

    return 0;
}


