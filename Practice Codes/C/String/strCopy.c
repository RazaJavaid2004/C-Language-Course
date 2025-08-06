#include <stdio.h>
#include <string.h>

int main() {
    char newstr[] = "new string";
    char oldstr[] = "old string";

    strcpy(newstr, oldstr);
    puts(newstr);

    return 0;
}