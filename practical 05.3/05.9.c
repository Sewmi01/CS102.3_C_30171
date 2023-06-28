#include <stdio.h>

int main() {
    char letter;

    printf("ASCII values for letters A to Z:\n");

    for (letter = 'A'; letter <= 'Z'; ++letter) {
        printf("Character: %c\tASCII Value: %d\n", letter, letter);
    }

    return 0;
}

