#include <stdio.h>

int main() {
    char ch;
    int upper_case, lower_case;

    printf ("Enter an Alphabet: ");
    scanf ("%c", &ch);

    upper_case = (ch == 'A' || ch == 'E' || ch == 'I' ||
                  ch == 'O' || ch == 'U');
    lower_case = (ch == 'a' || ch == 'e' || ch == 'i' ||
                  ch == 'o' || ch == 'u');

    if(upper_case || lower_case) {
        printf("%c is a vowel", ch);
    }
    else {
        printf("%c is a consonant", ch);
    }
    return 0;
}