#include <stdio.h>

int main() {
    int N;

    // Taking input
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    // Printing the mirrored right-angled triangle pattern
    for (int i = 1; i <= N; i++) {
        // Printing spaces
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
