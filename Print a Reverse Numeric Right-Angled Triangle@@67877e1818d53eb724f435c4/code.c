#include <stdio.h>

int main() {
    int N;

    // Taking input
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    // Printing the reverse numeric right-angled triangle
    for (int i = 1; i <= N; i++) {
        for (int j = i; j >= 1; j--) {
            printf("%d ", j); // Print numbers in reverse order
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
