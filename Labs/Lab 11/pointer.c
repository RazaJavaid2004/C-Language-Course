#include <stdio.h>

int main() {
    long value1 = 200000, value2;
    long *lptr;
    lptr = &value1;
    printf("%ld \n", *lptr);
    value2 = *lptr;
    printf("%ld \n", value2);
    printf("%p \n", &value1);
    printf("%p \n", lptr);
    return 0;
}