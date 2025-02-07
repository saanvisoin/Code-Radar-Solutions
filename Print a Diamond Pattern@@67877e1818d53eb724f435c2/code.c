#include <stdio.h>

int main() {
    int N;

    // Taking input
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    // Printing the upper half of the diamond
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" "); // Print leading spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // Print stars
        }
        printf("\n"); // Move to the next line
    }

    // Printing the lower half of the diamond
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            printf(" "); // Print leading spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // Print stars
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
