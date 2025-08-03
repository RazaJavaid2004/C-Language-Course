#include <stdio.h>

int main() {
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 95;
    marks[0][2] = 94;

    marks[1][0] = 89;
    marks[1][1] = 85;
    marks[1][2] = 80;

    printf("%d \n", marks[0][0]);

    return 0;
}