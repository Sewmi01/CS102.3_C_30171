#include <stdio.h>

int main() {
    int n = 10;  // Number of terms to be printed
    int fib1 = 0, fib2 = 1, nextTerm, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", fib1);
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
    }

    return 0;
}

