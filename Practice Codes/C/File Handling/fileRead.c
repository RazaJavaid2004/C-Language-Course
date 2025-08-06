#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    int dig;
    char ch;

    if(fptr == NULL) {
        printf("File doesn't exist \n");
    }
    else {
        fscanf(fptr, "%c", &ch);
        printf("Character = %c \n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character = %c \n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character = %c \n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character = %c \n", ch);
        fscanf(fptr, "%c", &ch);
        printf("Character = %c \n", ch);

        fscanf(fptr, "%d", &dig);
        printf("Character = %d \n", dig);
        fscanf(fptr, "%d", &dig);
        printf("Character = %d \n", dig);
        fscanf(fptr, "%d", &dig);
        printf("Character = %d \n", dig);
        fscanf(fptr, "%d", &dig);
        printf("Character = %d \n", dig);
        fscanf(fptr, "%d", &dig);
        printf("Character = %d \n", dig);

        fclose(fptr);
    }
    return 0;
}