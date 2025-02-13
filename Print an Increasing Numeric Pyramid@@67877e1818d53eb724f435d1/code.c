// Your code here...
#include <stdio.h>

int main() {
    int i, j, rows;
    scanf("%d", &rows);

    for(i = 1; i <= rows; ++i) {
        for(j = 1; j <= rows - i; ++j) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
