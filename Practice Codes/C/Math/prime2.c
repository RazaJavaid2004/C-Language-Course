#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter Number: ");
    scanf("%d", &n);

    if(n <= 1) count = 1;
    
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            count++;
            break;
        }
    }
    if(count > 0) printf("%d is not a Prime Number", n);
    else printf("%d is a Prime Number", n);

    return 0;
}