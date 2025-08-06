#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("odd.txt", "w");

    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    fprintf(fptr, "Odd Numbers: \n");

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            fprintf(fptr, "%d \n", i);
        }
    }

    fclose(fptr);

    return 0;
}