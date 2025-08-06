#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("atest.txt", "a");

    fprintf(fptr, "%c", 'F');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'U');
    fprintf(fptr, "%c", 'I');
    fprintf(fptr, "%c", 'T');

    fclose(fptr);

    return 0;
}