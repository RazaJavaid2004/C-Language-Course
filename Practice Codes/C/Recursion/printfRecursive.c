#include <stdio.h>

void print(int count);

int main() {
    int n;
    printf("Enter Number of times you want to print: ");
    scanf("%d", &n);

    print(n);
}
//recursive function
void print(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello World \n");
    print(count - 1);
}