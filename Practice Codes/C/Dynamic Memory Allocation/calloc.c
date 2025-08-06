#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr;
    printf("Enter the Size of Memory: ");
    scanf("%d", &n);

    ptr = (int*) calloc (5, sizeof(int));

    for(int i = 0; i < 5; i++) {
        printf("%d", ptr[i]);
    }
    return 0;
}