#include <stdio.h>

int main() {
    for(int i=1; i<=5; i++) {
        if(i == 3) {
            continue;
        }
        printf("%d \n", i);
    }
    printf("Thank you");
    return 0;
}