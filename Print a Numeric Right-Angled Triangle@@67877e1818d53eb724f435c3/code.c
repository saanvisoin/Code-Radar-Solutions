#include <stdio.h>

int main() {
    int N;

    // Taking input
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    // Printing the number pattern
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
