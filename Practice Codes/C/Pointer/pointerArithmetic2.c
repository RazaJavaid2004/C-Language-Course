#include <stdio.h>

int main() {
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference of %d and %d is: %d \n", _ptr, ptr, _ptr - ptr);

    _ptr = &age;
    printf("Comparision: %d \n", _ptr == ptr);

    return 0;
}