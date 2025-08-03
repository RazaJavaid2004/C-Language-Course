#include <stdio.h>
#include <string.h>
//first array must have enough space for merging
int main() {
    char firStr[15] = "Hello";
    char secStr[10] = "World";

    strcat(firStr, secStr);

    puts(firStr);
    
    return 0;
}