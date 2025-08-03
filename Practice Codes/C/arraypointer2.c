#include <stdio.h>

int main() {
    int aadhar[5];
    int *ptr = &aadhar[0];

    //input
    for(int i = 0; i < 5; i++) {
        printf("Enter %d index: ", i);
        scanf("%d", &aadhar);
    }
}