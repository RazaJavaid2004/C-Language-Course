#include <stdio.h>
#include <string.h>

int strlen(char* str);

int main() {
    char str[100];
    printf("Enter A String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    printf("String Length: %d", length);

    return 0;
}

int strlen(char* str) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}