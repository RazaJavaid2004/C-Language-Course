#include <stdio.h>

int main() {
    int marks;
    printf("enter number : ");
    scanf("%d", &marks);

    if(marks <= 30) {
        printf("F \n");
    }
    else if(marks >= 30 && marks < 50) {
        printf("D \n");
    }
    else if(marks >= 50 && marks < 70) {
        printf("C \n");
    }
    else if(marks >= 70 && marks < 90) {
        printf("B \n");
    }
    else {
        printf("A \n");
    }
    return 0;
}