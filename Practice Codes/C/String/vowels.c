#include <stdio.h>

int main() {
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);

    if(ch == 'A' || ch == 'a' || ch == 'E' ||
       ch == 'e' || ch == 'I' || ch == 'i' ||
       ch == 'O' || ch == 'o' || ch == 'U' ||
       ch == 'u') {
        printf("%c is a vowel \n", ch);
    }
    else {
        printf("%c is a consonant \n", ch);
    }
    return 0;
}