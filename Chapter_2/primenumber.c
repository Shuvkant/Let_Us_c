#include <stdio.h>

int main() {
    int i, j;
    int isPrime;

    printf("Prime numbers from 1 to 300 are:\n");

    for (i = 2; i <= 300; i++) {
        isPrime = 1; // Assume the number is prime initially

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
