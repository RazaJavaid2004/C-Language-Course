#include <stdio.h>

int main() {
    int arr[4][10];
    int mul[] = {2, 4, 6, 8};

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 10; j++) {
            arr[i][j] = mul[i] * (j+1);
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d x %d = %d \n", mul[i], j+1, arr[i][j]);
        }
    }

    return 0;
}