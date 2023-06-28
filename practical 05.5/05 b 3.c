#include <stdio.h>

int main() {
    float prices[10];
    int i, count = 0;
    float total = 0;


    printf("Enter the prices for 10 items:\n");
    for (i = 0; i < 10; i++) {
        printf("Item %d: ", i + 1);
        scanf("%f", &prices[i]);
    }


    for (i = 0; i < 10; i++) {
        total += prices[i];
        if (prices[i] > 200) {
            count++;
        }
    }

    float average = total / 10;


    printf("\nAverage Price: %.2f\n", average);
    printf("Number of items with price > 200: %d\n", count);

    return 0;
}

