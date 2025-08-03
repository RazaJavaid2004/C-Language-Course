#include <stdio.h>

int main() {
    char Str[50];
    char ch;

    int i = 0;
    while(i != '\n') {
        scanf("%c", &ch);
        Str[i] = ch;
        i++;
    }
    Str[i] = '\0';

    puts(Str);

    return 0;
}