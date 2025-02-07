#include <stdio.h>

int main() {
    char grade;
    
    // Taking input
    if (scanf(" %c", &grade) != 1) {
        printf("Invalid grade\n");
        return 1;
    }

    // Evaluating the grade
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}

