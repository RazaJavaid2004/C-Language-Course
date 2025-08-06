#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str); // Note: gets() is unsafe, consider using fgets() in real applications

    // Loop through each character in the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("Total number of characters: %d\n", count);

    return 0;
}