#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Test characters
    ch = 'a';
    printf("Character: %c\n", ch);
    printf("isalpha: %d\n", isalpha(ch)); // Check if it is an alphabetic character
    printf("isdigit: %d\n", isdigit(ch)); // Check if it is a digit
    printf("isalnum: %d\n", isalnum(ch)); // Check if it is an alphanumeric character
    printf("islower: %d\n", islower(ch)); // Check if it is a lowercase letter
    printf("isupper: %d\n", isupper(ch)); // Check if it is an uppercase letter
    printf("isprint: %d\n", isprint(ch)); // Check if it is a printable character
    printf("isgraph: %d\n", isgraph(ch)); // Check if it is a graphical character
    printf("ispunct: %d\n", ispunct(ch)); // Check if it is a punctuation character
    printf("isspace: %d\n", isspace(ch)); // Check if it is a whitespace character

    ch = '1';
    printf("\nCharacter: %c\n", ch);
    printf("isalpha: %d\n", isalpha(ch));
    printf("isdigit: %d\n", isdigit(ch));
    printf("isalnum: %d\n", isalnum(ch));
    printf("islower: %d\n", islower(ch));
    printf("isupper: %d\n", isupper(ch));
    printf("isprint: %d\n", isprint(ch));
    printf("isgraph: %d\n", isgraph(ch));
    printf("ispunct: %d\n", ispunct(ch));
    printf("isspace: %d\n", isspace(ch));

    ch = ' ';
    printf("\nCharacter: %c\n", ch);
    printf("isalpha: %d\n", isalpha(ch));
    printf("isdigit: %d\n", isdigit(ch));
    printf("isalnum: %d\n", isalnum(ch));
    printf("islower: %d\n", islower(ch));
    printf("isupper: %d\n", isupper(ch));
    printf("isprint: %d\n", isprint(ch));
    printf("isgraph: %d\n", isgraph(ch));
    printf("ispunct: %d\n", ispunct(ch));
    printf("isspace: %d\n", isspace(ch));

    // Convert characters
    ch = 'a';
    printf("\nCharacter: %c\n", ch);
    printf("toupper: %c\n", toupper(ch)); // Convert to uppercase
    printf("tolower: %c\n", tolower(ch)); // Convert to lowercase

    ch = 'A';
    printf("\nCharacter: %c\n", ch);
    printf("toupper: %c\n", toupper(ch));
    printf("tolower: %c\n", tolower(ch));

    return 0;
}