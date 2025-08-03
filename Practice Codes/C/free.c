#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*) calloc (4, sizeof(int));

    for(int i = 0; i < 4; i++) {
        printf("%d \n", ptr[i]);
    }

    free(ptr);
    ptr = (int*) calloc (2, sizeof(int));

    for(int j = 0; j < 2; j++) {
        printf("%.2f \n", ptr[j]);
    }

    return 0;
}