#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    if(fptr == NULL) {
        printf("File doesn't exist \n");
    } else {
        printf("Character = %c \n", fgetc(fptr));
        printf("Character = %c \n", fgetc(fptr));
        printf("Character = %c \n", fgetc(fptr));
        printf("Character = %c \n", fgetc(fptr));
        printf("Character = %c \n", fgetc(fptr));

        fclose(fptr);
    }
    return 0;
}