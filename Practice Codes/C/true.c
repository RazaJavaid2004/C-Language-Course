#include <stdio.h>
//print true if it's Sunday and it's Snowing.
int main() {
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

    //if it's Monday or it's Raining.
    int isMonday = 1;
    int isRaining = 0;
    printf("%d \n", isMonday || isRaining);

    //number greater than 9 and less than 100.
    int x;
    printf("enter number :");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}