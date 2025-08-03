#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("sentence.txt", "r");

    char ch;
    ch = fgetc(fptr);
    if(fptr == NULL) {
        printf("File doesn't exists. \n");
    }
    else  {
        while(ch != EOF) {
            printf("%c", ch);
            ch = fgetc(fptr);
        }
    }
    return 0;
}