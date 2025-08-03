#include <stdio.h>

int main() {
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);

    printf("Ascii value of %c is %d", ch, ch);

    return 0;
}