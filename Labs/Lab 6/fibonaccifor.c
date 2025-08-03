#include <stdio.h>

int main() {
    int limit = 1000;
    int a = 1, b = 1, next;
    int sum = 0;

    printf("Fibonacci series up to %d:\n", limit);
    printf("%d %d ", a, b);

    for (int i = 3; ; i++) {
        next = a + b;
        if (next > limit) break;
        
        printf("%d ", next);
        
        if (next % 3 == 0 || next % 5 == 0 || next % 7 == 0) {
            sum += next;
        }
        
        a = b;
        b = next;
    }
    
    printf("\nSum of Fibonacci numbers divisible by 3, 5, or 7: %d\n", sum);
    
    return 0;
}