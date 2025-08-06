#include <stdio.h>

int main() {
    char str[5];
    for(int i = 0; i < 4; i++) {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    for(int i = 0; i < 4; i++) {
        printf("%c", str[i]);
    }
    str[5] = '\0';
    printf("\n%s", str);

    return 0;
}