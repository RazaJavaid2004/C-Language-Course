#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);

    if(isdigit(ch)) {
        printf("Digit \n");
    }
    else {
        printf("Not a digit \n");
    }
    return 0;
}