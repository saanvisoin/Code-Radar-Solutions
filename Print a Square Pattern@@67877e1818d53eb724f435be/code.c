#include <stdio.h>

int main() {
    int N;

    // Taking input
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    // Printing the square pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
