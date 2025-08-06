#include <stdio.h>

int main() {
    // string array
    char *canchange = "Hello World";
    puts(canchange);

    canchange = "Raza";
    puts(canchange);

    //string array
    char cannotchange[15] = "Hello World";
    puts(cannotchange);

    return 0;
}