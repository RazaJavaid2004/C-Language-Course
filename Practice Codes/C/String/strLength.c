#include <stdio.h>

int stringlength(char arr[]);

int main() {
    char Name[50];
    printf("Enter your Name: ");
    fgets(Name, 50, stdin);
    puts(Name);

    printf("Length is: %d", stringlength(Name));
    
    return 0;
}

int stringlength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count - 1;
}