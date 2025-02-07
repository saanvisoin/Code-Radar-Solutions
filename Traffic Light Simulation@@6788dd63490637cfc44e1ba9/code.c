#include <stdio.h>

int main() {
    char signal;
    
    // Taking input
    if (scanf(" %c", &signal) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    // Determining the action based on the signal
    switch (signal) {
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
