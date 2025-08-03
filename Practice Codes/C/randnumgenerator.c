#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randnum = (rand() % 100) + 1;
    printf("Random Number: %d", randnum);
    return 0;
}