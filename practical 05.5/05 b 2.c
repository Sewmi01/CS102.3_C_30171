#include <stdio.h>

int main() {
    int marks[10];
    int i, total = 0;
    int max_mark, min_mark;


    printf("Enter the marks for 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    max_mark = marks[0];
    min_mark = marks[0];


    for (i = 0; i < 10; i++) {
        total += marks[i];
        if (marks[i] > max_mark) {
            max_mark = marks[i];
        }
        if (marks[i] < min_mark) {
            min_mark = marks[i];
        }
    }


    float average = (float)total / 10;


    printf("\nMaximum Marks: %d\n", max_mark);
    printf("Minimum Marks: %d\n", min_mark);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

