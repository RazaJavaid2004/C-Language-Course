#include <stdio.h>

int main() {
    char ch;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a lowercase alphabet
    (ch >= 'a' && ch <= 'z') ? printf("%c is a lowercase alphabet.\n", ch) : printf("%c is not a lowercase alphabet.\n", ch);

    // Check if the character is a special symbol
    ((ch < '0' || ch > '9') && (ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')) ? printf("%c is a special symbol.\n", ch) : printf("%c is not a special symbol.\n", ch);

    return 0;
}