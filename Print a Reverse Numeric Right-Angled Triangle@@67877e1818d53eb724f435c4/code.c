#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    for (int i = 1; i >= N; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); 
        }
        printf("\n"); 
    }

    return 0;
}
