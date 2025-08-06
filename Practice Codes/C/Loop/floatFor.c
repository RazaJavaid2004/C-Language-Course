#include <stdio.h>

int main() {
    for(float i = 1.0;i<=5.0;i++) {
        printf("%.1f \n", i);
    }
    for(char ch = 'A';ch <= 'Z'; ch++) {
        printf("%c \n", ch); // if %d is written, then ASCII values are printed.
    }
    return 0;
}