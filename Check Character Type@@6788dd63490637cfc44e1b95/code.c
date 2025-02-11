#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit \n", ch);
    }
    // Check if the character is an alphabet letter
    else if (isalpha(ch)) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel \n", ch);
        }
        // Otherwise, it's a consonant
        else {
            printf("Consonant \n", ch);
        }
    }
    // If it's neither a digit nor an alphabet letter, it's a special character
    else {
        printf("Special Character.\n", ch);
    }

    return 0;
}
