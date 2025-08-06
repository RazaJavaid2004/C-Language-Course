#include <stdio.h>

int main() {
    printf("%d \n", 2<3 && 4>2);
    printf("%d \n", 3<2 && 2<4);
    printf("%d \n", 2<3 || 1>3);
    printf("%d \n", !(5>3));
    printf("%d \n", !(1<3 && 2>3));
    return 0;
}