#include <stdio.h>

int main() {
    int N;

    // Taking input
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    // Printing the hollow square pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print '*' for border positions, otherwise print space
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
