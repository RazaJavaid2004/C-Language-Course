#include <stdio.h>
#include <string.h>

int main() {
    char firStr[] = "Banana";
    char secStr[] = "Apple";

    printf("%d \n", strcmp(firStr, secStr));
    printf("%d \n", strcmp(secStr, firStr));

    return 0;
}