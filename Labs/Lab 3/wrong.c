#include <stdio.h>

int main() {
    /* Number is -1294967296 because int cannot store such
       a large number. To solve this, we should use
       long long data type.
    */
    int testInteger = 3000000000;
    printf("Number is %d \n", testInteger);
}