#include <stdio.h>
#include <string.h>

int main() {
    char first[100];
    char last[100];
    char full[100];
    full[0] = '\0';

    printf("Enter First Name: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter Second Name: ");
    fgets(last, sizeof(last), stdin);
    last[strcspn(last, "\n")] = '\0';
    
    strcat(full, first);
    strcat(full, " ");
    strcat(full, last);

    int len = strlen(full);
    for(int i = 0; i < len / 2; i++) {
        char temp = full[i];
        full[i] = full[len - i - 1];
        full[len - i - 1] = temp;
    }
    printf("Your Reversed Name: %s", full);

    return 0;
}