/*
The `stdbool.h` header file in C provides a way to use boolean types in a manner that is more readable and consistent with languages that have native boolean types. This header file defines three macros: `bool`, `true`, and `false`.

### Key Functions and Macros in `stdbool.h`:
1. `bool` - A macro that expands to `_Bool`, the boolean type in C.
2. `true` - A macro that expands to `1`, representing the true value.
3. `false` - A macro that expands to `0`, representing the false value.
*/
#include <stdio.h>
#include <stdbool.h>

// Function prototypes
bool isEven(int number);
bool isPrime(int number);
bool allElementsAreEven(int array[], int size);
bool anyElementIsZero(int array[], int size);

int main() {
    int number = 7;
    int array[] = {2, 4, 6, 8, 0}; // Example array
    int size = sizeof(array) / sizeof(array[0]);

    // Check if the number is even
    if (isEven(number)) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number\n", number);
    } else {
        printf("%d is not a prime number\n", number);
    }

    // Check if all elements in the array are even
    if (allElementsAreEven(array, size)) {
        printf("All elements in the array are even\n");
    } else {
        printf("Not all elements in the array are even\n");
    }

    // Check if any element in the array is zero
    if (anyElementIsZero(array, size)) {
        printf("At least one element in the array is zero\n");
    } else {
        printf("No element in the array is zero\n");
    }

    return 0;
}

bool isEven(int number) {
    return number % 2 == 0 ? true : false;
}

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

bool allElementsAreEven(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

bool anyElementIsZero(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            return true;
        }
    }
    return false;
}
/*
1. **Headers and Macros**:
   - `#include <stdbool.h>`: This includes the `stdbool.h` header file, which defines the boolean type macros (`bool`, `true`, and `false`).

2. **Boolean Functions**:
   - `bool isEven(int number)`: This function returns `true` if the number is even, otherwise `false`.
   - `bool isPrime(int number)`: This function returns `true` if the number is prime, otherwise `false`.
   - `bool allElementsAreEven(int array[], int size)`: This function returns `true` if all elements in the array are even, otherwise `false`.
   - `bool anyElementIsZero(int array[], int size)`: This function returns `true` if any element in the array is zero, otherwise `false`.

3. **Main Function**:
   - The main function initializes a number and an array and checks the following conditions using the boolean functions:
     - Whether the number is even or odd.
     - Whether the number is prime.
     - Whether all elements in the array are even.
     - Whether any element in the array is zero.
*/