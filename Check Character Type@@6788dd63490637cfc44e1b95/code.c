#include <stdio.h>
#include <ctype.h> // For the isalpha and tolower functions

int main() {
    char ch;
  
    scanf("%c", &ch);

    // Convert character to lowercase to simplify comparison
    char lowerCh = tolower(ch);

    if (isalpha(ch)) {
        // Check if the character is a vowel
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Special Character\n");
    }

    return 0;
}
