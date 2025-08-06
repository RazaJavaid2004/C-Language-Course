#include <stdio.h>

int main() {
    char ch;
    printf("Enter a,b or c: ");
    scanf("%c", &ch);

    switch(ch){
        case 'a':
        case 'A':
        printf("You entered %c", ch);
        break;
        case 'b':
        case 'B':
        printf("You entered %c", ch);
        break;
        case 'c':
        case 'C':
        printf("You entered %c", ch);
        break;
    }
    return 0;
}