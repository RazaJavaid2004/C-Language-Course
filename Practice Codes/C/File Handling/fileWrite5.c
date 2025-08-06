#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Digits.txt", "r");

    int a, b;
    if(fptr == NULL)  {
        printf("File doesn't exists");
    }
    else {
        fscanf(fptr, "%d", &a);
        fscanf(fptr, "%d", &b);
    }

    fclose(fptr);

    fptr = fopen("Sum.txt", "w");
    fprintf(fptr, "Sum is: %d", a+b);

    fclose(fptr);

    return 0;
}