#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    gets(str);
    puts(str);
    printf("String Length is: %d", strlen(str));
    return 0;
}