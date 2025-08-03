// C program to find the size of given data type using pointers
#include <stdio.h>

int main() {
    int intType;

    // Pointer to the variable of type int
    int *ptr = &intType;

    // Converting the pointer to the long long unsigned int value
    unsigned long long start = (unsigned long long )ptr;

      // Incrementing and converting it again
    ptr++;
    unsigned long long end = (unsigned long long)ptr;

    // Find the difference/size
    unsigned long long size = (unsigned long long)(end - start);
    printf("Size of int is: %llu bytes", size);

    return 0;
}