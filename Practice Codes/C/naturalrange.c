#include <stdio.h>

int main() {
    int start, end;

    printf("Enter Start of the Range: ");
    scanf("%d", &start);

    printf("Enter End of the Range: ");
    scanf("%d", &end);

    printf("Natural Numbers from %d to %d are:- \n", start, end);
   
    for(int i = start; i <= end; i++) {
        printf("%d \n", i);
    }
    return 0;
}