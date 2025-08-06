#include <stdio.h>

void namaste();
void bonjour();

int main() {
    char ch;

    printf("Enter i for indian and f for french: ");
    scanf("%c", &ch);;

    if(ch == 'i') {
        namaste();
    }
    else if(ch == 'f') {
        bonjour();
    }
    else {
        printf("Invalid Input \n");
    }
    return 0;
}

void namaste() {
    printf("Namaste \n");
}

void bonjour() {
    printf("Bonjour \n");
}