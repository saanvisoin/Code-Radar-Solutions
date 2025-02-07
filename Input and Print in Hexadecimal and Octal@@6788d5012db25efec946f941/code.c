#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Output statements
    printf("Hexadecimal: %x\n", num);  // %x is the format specifier for hexadecimal
    printf("Octal: %o\n", num);        // %o is the format specifier for octal

    return 0;
}
